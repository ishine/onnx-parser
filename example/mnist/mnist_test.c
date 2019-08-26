#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>
#include <onnx-parser.h>

// #include <string.h>
// #include <float.h>
// #include <math.h>
// #include 

#include "mnist.h"
#include "backend.h"

#define ONNX_USE_NWHC
#ifdef  ONNX_USE_NWHC
    // NWHC
    #define W_INDEX 0
    #define H_INDEX 1
    #define C_INDEX 2
#else
    // NCWH
    #define C_INDEX 0
    #define W_INDEX 1
    #define H_INDEX 2
#endif

float* conv2D_layer(Onnx__GraphProto* graph, const float *input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" );

    Onnx__NodeProto* node = onnx_graph_get_node_by_name(graph, layer_name);
    if(node == NULL)
    {
        // layer not found
        return NULL;
    }
    const char* weight = node->input[1];
    const char* bias = node->input[2];

    // Get weight shape
    long* shapeW = onnx_graph_get_dims_by_name(graph, weight);
    if(shapeW == NULL)
    {
        return NULL;
    }
    long dimW = onnx_graph_get_dim_by_name(graph, weight);
    if(dimW < 0)
    {
        return NULL;
    }

    // Get weights
    // NCWH --> NWHC
    long permW_t[] = { 0, 2, 3, 1};
    float* W = onnx_graph_get_weights_by_name(graph, weight);
    if(W == NULL)
    {
        return NULL;
    }
    float* W_t = onnx_tensor_transpose(W, shapeW, dimW, permW_t);

    // Get bias
    float* B = onnx_graph_get_weights_by_name(graph, bias);
    if(B == NULL)
    {
        return NULL;
    }

    float* output = (float*) malloc(sizeof(float)*shapeW[0]*shapeInput[W_INDEX]*shapeInput[H_INDEX]);
    memset(output, 0, sizeof(sizeof(float)*shapeW[0]*shapeInput[W_INDEX]*shapeInput[H_INDEX]));
    conv2D(input, shapeInput[W_INDEX], shapeInput[H_INDEX], shapeW[1], W_t, shapeW[0], shapeW[2], shapeW[3], 1, 1, 1, 1, B, output, shapeInput[W_INDEX], shapeInput[H_INDEX]);

    shapeOutput[W_INDEX] = shapeInput[W_INDEX];
    shapeOutput[H_INDEX] = shapeInput[H_INDEX];
    shapeOutput[C_INDEX] = shapeW[0];

    free(W_t);

    return output;
}

float* maxpool_layer(Onnx__GraphProto* graph, float* input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" );

    Onnx__NodeProto* node = onnx_graph_get_node_by_name(graph, layer_name);
    if(node == NULL)
    {
        // layer not found
        return NULL;
    }

    uint16_t kernel_x = -1;
    uint16_t kernel_y = -1;
    uint16_t padding_x = 0;
    uint16_t padding_y = 0;
    uint16_t stride_x = -1;
    uint16_t stride_y = -1;

    for(int i = 0; i < node->n_attribute; i++)
    {
        if( strcmp(node->attribute[i]->name, "kernel_shape") == 0 )
        {
            kernel_x = node->attribute[i]->ints[0];
            kernel_y = node->attribute[i]->ints[1];
        }
        if( strcmp(node->attribute[i]->name, "strides") == 0 )
        {
            stride_x = node->attribute[i]->ints[0];
            stride_y = node->attribute[i]->ints[1];
        }
    }

    uint16_t out_x = (shapeInput[W_INDEX] - kernel_x + 2 * padding_x) / stride_x + 1;
    uint16_t out_y = (shapeInput[H_INDEX] - kernel_y + 2 * padding_y) / stride_y + 1;

    float* output = (float*) malloc(sizeof(float)*out_x*out_y*shapeInput[C_INDEX]);
    if(output == NULL)
    {
        // No memory
        return NULL;
    }
    memset(output, 0, sizeof(sizeof(float)*out_x*out_y*shapeInput[C_INDEX]));
    maxpool(input, shapeInput[W_INDEX], shapeInput[H_INDEX], shapeInput[C_INDEX], kernel_x, kernel_y, padding_x, padding_y, stride_x, stride_y, out_x, out_y, output);

    shapeOutput[W_INDEX] = out_x;
    shapeOutput[H_INDEX] = out_y;
    shapeOutput[C_INDEX] = shapeInput[C_INDEX];

    return output;
}

float* matmul_layer(Onnx__GraphProto* graph, const float *input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" );

    Onnx__NodeProto* node = onnx_graph_get_node_by_name(graph, layer_name);
    const char* weight = node->input[1];

    long* shapeW =  onnx_graph_get_dims_by_name(graph, weight);
    if(shapeW == NULL)
    {
        return NULL;
    }
    long dimW = onnx_graph_get_dim_by_name(graph, weight);
    if(dimW < 0)
    {
        return NULL;
    }

    assert(shapeW[0] == shapeInput[1]);

    long permW_t[] = {1, 0};
    float* W = onnx_graph_get_weights_by_name(graph, weight);
    if(W == NULL)
    {
        return NULL;
    }
    float* W_t = onnx_tensor_transpose(W, shapeW, dimW, permW_t);

    float* output = (float*) malloc(sizeof(float)*shapeW[1]);
    if(output == NULL)
    {
        // No memory
        return NULL;
    }
    memset(output, 0, sizeof(sizeof(float)*shapeW[1]));
    matmul(input, W_t, shapeW[0], shapeW[1], output);

    shapeOutput[0] = shapeInput[0];
    shapeOutput[1] = shapeW[1];

    free(W_t);

    return output;
}

float* add_layer(Onnx__GraphProto* graph, const float *input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" );

    Onnx__NodeProto* node = onnx_graph_get_node_by_name(graph, layer_name);
    const char* bias = node->input[1];

    float* B = onnx_graph_get_weights_by_name(graph, bias);
    long* shapeB =  onnx_graph_get_dims_by_name(graph, bias);
    if(shapeB == NULL)
    {
        return NULL;
    }

    float* output = (float*) malloc(sizeof(float)*shapeB[0]);
    memset(output, 0, sizeof(sizeof(float)*shapeB[0]));
    add(input, B, shapeB[0], output);

    memcpy(shapeInput, shapeOutput, sizeof(long)*3);

    return output;
}

float* relu_layer(Onnx__GraphProto* graph, const float *input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" );

    long len = shapeInput[0] * shapeInput[1] * shapeInput[2];
    float* output = (float*) malloc(sizeof(float)*len);
    memset(output, 0, sizeof(sizeof(float)*len));

    relu(input, len, output);

    memcpy(shapeInput, shapeOutput, sizeof(long)*3);

    return output;
}

float* transpose_layer(Onnx__GraphProto* graph, const float *input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" );

    Onnx__NodeProto* node = onnx_graph_get_node_by_name(graph, layer_name);
    if(node == NULL)
    {
        return NULL;
    }

    long perm_t[3];
    long* perm = node->attribute[0]->ints;
    perm_t[0] = perm[1] - 1;
    perm_t[1] = perm[2] - 1;
    perm_t[2] = perm[3] - 1;

    float* output = onnx_tensor_transpose(input, shapeInput, 3, perm_t);

    shapeOutput[0] = shapeInput[perm_t[0]];
    shapeOutput[1] = shapeInput[perm_t[1]];
    shapeOutput[2] = shapeInput[perm_t[2]];

    return output;
}

float* softmax_layer(Onnx__GraphProto* graph, const float *input, long* shapeInput, long* shapeOutput, const char* layer_name)
{
    assert(graph != NULL && input != NULL && layer_name != "" && shapeInput[1] > 0);

    float* output = (float*) malloc(sizeof(float)*shapeInput[1]);
    memset(output, 0, sizeof(sizeof(float)*shapeInput[1]));
    softmax(input, shapeInput[1], output);

    memcpy(shapeInput, shapeOutput, sizeof(long)*3);

    return output;
}

int main(int argc, char const *argv[])
{
    if (argc < 2) 
    {
        printf("Usage: %s onnx_file_name [image_num]\n", argv[0]);
        return 0;
    }

    // Load Model
    Onnx__ModelProto* model = onnx_load_model(argv[1]);
    if(model == NULL)
    {
        printf("Failed to load model %s\n", argv[1]);
        return -1;
    }

    // Read Input: NWHC
    int img_index = 0;
    if(argc == 3)
    {
        img_index = atoi(argv[2]);
        if(img_index < 0 || img_index > TOTAL_IMAGE - 1)
        {
            img_index = 0;
        }
    }
    print_img(img[img_index]);

    // 0. Initialize input shape
    long* shapeInput = (long*) malloc(sizeof(long)*3);
    long* shapeOutput = (long*) malloc(sizeof(long)*3);
    shapeInput[0] = 28;
    shapeInput[1] = 28;
    shapeInput[2] =  1;

    // 1. Transpose
    // printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    // float* input = transpose_layer(model->graph, img[img_index], shapeInput, shapeOutput, "Transpose6");
    // memcpy(shapeInput, shapeOutput, sizeof(long)*3);

    // 2. Conv2D
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* conv1 = conv2D_layer(model->graph, img[img_index], shapeInput, shapeOutput, "conv2d_5");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    // free(input);

    // 3. Relu
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* relu1 = relu_layer(model->graph, conv1, shapeInput, shapeOutput, "Relu1");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(conv1);

    // 4. Maxpool
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* maxpool1 = maxpool_layer(model->graph, relu1, shapeInput, shapeOutput, "max_pooling2d_5");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(relu1);

    // 5. Conv2D
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* conv2 = conv2D_layer(model->graph, maxpool1, shapeInput, shapeOutput, "conv2d_6");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(maxpool1);

    // 6. Relu
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* relu2 = relu_layer(model->graph, conv2, shapeInput, shapeOutput, "Relu");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(conv2);

    // 7. Maxpool
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* maxpool2 = maxpool_layer(model->graph, relu2, shapeInput, shapeOutput, "max_pooling2d_6");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(relu2);

    // 8. Transpose
    // printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    // float* maxpool2_t = transpose_layer(model->graph, maxpool2, shapeInput, shapeOutput, "Transpose1");
    // memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    // free(maxpool2);

    // 9. Flatten
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    shapeInput[1] = shapeInput[0] * shapeInput[1] * shapeInput[2]; 
    shapeInput[2] = 1; 
    shapeInput[0] = 1; 

    // 10. Dense
    printf("%ld %ld %ld\n", shapeInput[0], shapeInput[1], shapeInput[2]);
    float* matmul1 = matmul_layer(model->graph, maxpool2, shapeInput, shapeOutput, "dense_5");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(maxpool2);

    // 11. Add
    float* dense1 = add_layer(model->graph, matmul1, shapeInput, shapeOutput, "Add1");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(matmul1);

    // 12. Dense
    float* matmul2 = matmul_layer(model->graph, dense1, shapeInput, shapeOutput, "dense_6");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(dense1);

    // 13. Add
    float* dense2 = add_layer(model->graph, matmul2, shapeInput, shapeOutput, "Add");
    memcpy(shapeInput, shapeOutput, sizeof(long)*3);
    free(matmul2);

    // 14. Softmax
    float* output = softmax_layer(model->graph, dense2, shapeInput, shapeOutput, "Softmax");
    free(dense2);

    // 15. Identity
    // Do Nothing Here

    // Result
    float max = 0;
    int max_index = 0;
    printf("\nPredictions: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%f ", output[i]);
        if(output[i] > max)
        {
            max = output[i];
            max_index = i;
        }
    }
    printf("\n");
    printf("\nThe number is %d\n", max_index);

    // Free model
    free(shapeInput);
    free(shapeOutput);
    free(output);
    onnx__model_proto__free_unpacked(model, NULL);

    return 0;
}
