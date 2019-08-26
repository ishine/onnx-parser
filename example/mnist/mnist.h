#include <stdint.h>

#define IMG0 {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.3803922, 0.37647063, 0.3019608, 0.46274513, 0.2392157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.3529412, 0.5411765, 0.9215687, 0.9215687, 0.9215687, 0.9215687, 0.9215687, 0.9215687, 0.9843138, 0.9843138, 0.9725491, 0.9960785, 0.9607844, 0.9215687, 0.74509805, 0.08235294, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.54901963, 0.9843138, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.7411765, 0.09019608, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.8862746, 0.9960785, 0.81568635, 0.7803922, 0.7803922, 0.7803922, 0.7803922, 0.54509807, 0.2392157, 0.2392157, 0.2392157, 0.2392157, 0.2392157, 0.5019608, 0.8705883, 0.9960785, 0.9960785, 0.7411765, 0.08235294, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.14901961, 0.32156864, 0.050980397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.13333334, 0.8352942, 0.9960785, 0.9960785, 0.45098042, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.32941177, 0.9960785, 0.9960785, 0.9176471, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.32941177, 0.9960785, 0.9960785, 0.9176471, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.4156863, 0.6156863, 0.9960785, 0.9960785, 0.95294124, 0.20000002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.098039225, 0.45882356, 0.8941177, 0.8941177, 0.8941177, 0.9921569, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.94117653, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.26666668, 0.4666667, 0.86274517, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.9960785, 0.5568628, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.14509805, 0.73333335, 0.9921569, 0.9960785, 0.9960785, 0.9960785, 0.8745099, 0.8078432, 0.8078432, 0.29411766, 0.26666668, 0.8431373, 0.9960785, 0.9960785, 0.45882356, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.4431373, 0.8588236, 0.9960785, 0.9490197, 0.89019614, 0.45098042, 0.34901962, 0.121568635, 0.0, 0.0, 0.0, 0.0, 0.7843138, 0.9960785, 0.9450981, 0.16078432, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.6627451, 0.9960785, 0.6901961, 0.24313727, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.18823531, 0.9058824, 0.9960785, 0.9176471, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.07058824, 0.48627454, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.32941177, 0.9960785, 0.9960785, 0.6509804, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.54509807, 0.9960785, 0.9333334, 0.22352943, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.8235295, 0.9803922, 0.9960785, 0.65882355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9490197, 0.9960785, 0.93725497, 0.22352943, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.34901962, 0.9843138, 0.9450981, 0.3372549, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.019607844, 0.8078432, 0.96470594, 0.6156863, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.015686275, 0.45882356, 0.27058825, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}
#define IMG0_LABEL 7

#define IMG1 {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.121568635, 0.5176471, 0.9960785, 0.9921569, 0.9960785, 0.8352942, 0.32156864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.08235294, 0.5568628, 0.91372555, 0.98823535, 0.9921569, 0.98823535, 0.9921569, 0.98823535, 0.8745099, 0.078431375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.48235297, 0.9960785, 0.9921569, 0.9960785, 0.9921569, 0.87843144, 0.7960785, 0.7960785, 0.8745099, 1.0, 0.8352942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.7960785, 0.9921569, 0.98823535, 0.9921569, 0.8313726, 0.078431375, 0.0, 0.0, 0.2392157, 0.9921569, 0.98823535, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.16078432, 0.95294124, 0.87843144, 0.7960785, 0.7176471, 0.16078432, 0.59607846, 0.11764707, 0.0, 0.0, 1.0, 0.9921569, 0.40000004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.15686275, 0.078431375, 0.0, 0.0, 0.40000004, 0.9921569, 0.19607845, 0.0, 0.32156864, 0.9921569, 0.98823535, 0.078431375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.32156864, 0.83921576, 0.121568635, 0.4431373, 0.91372555, 0.9960785, 0.91372555, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.24313727, 0.40000004, 0.32156864, 0.16078432, 0.9921569, 0.909804, 0.9921569, 0.98823535, 0.91372555, 0.19607845, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.59607846, 0.9921569, 0.9960785, 0.9921569, 0.9960785, 0.9921569, 0.9960785, 0.91372555, 0.48235297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.59607846, 0.98823535, 0.9921569, 0.98823535, 0.9921569, 0.98823535, 0.75294125, 0.19607845, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.24313727, 0.7176471, 0.7960785, 0.95294124, 0.9960785, 0.9921569, 0.24313727, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.15686275, 0.6745098, 0.98823535, 0.7960785, 0.078431375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.08235294, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.7176471, 0.9960785, 0.43921572, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.24313727, 0.7960785, 0.6392157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2392157, 0.9921569, 0.5921569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.08235294, 0.83921576, 0.75294125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.043137256, 0.8352942, 0.9960785, 0.5921569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.40000004, 0.9921569, 0.5921569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.16078432, 0.8352942, 0.98823535, 0.9921569, 0.43529415, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.16078432, 1.0, 0.8352942, 0.36078432, 0.20000002, 0.0, 0.0, 0.121568635, 0.36078432, 0.6784314, 0.9921569, 0.9960785, 0.9921569, 0.5568628, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.6745098, 0.98823535, 0.9921569, 0.98823535, 0.7960785, 0.7960785, 0.91372555, 0.98823535, 0.9921569, 0.98823535, 0.9921569, 0.50980395, 0.078431375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.08235294, 0.7960785, 1.0, 0.9921569, 0.9960785, 0.9921569, 0.9960785, 0.9921569, 0.9568628, 0.7960785, 0.32156864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.078431375, 0.5921569, 0.5921569, 0.9921569, 0.67058825, 0.5921569, 0.5921569, 0.15686275, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}
#define IMG1_LABEL 3

#define TOTAL_IMAGE 2

static const float img[][784] = {IMG0, IMG1};
static const signed char label[] = {IMG0_LABEL, IMG1_LABEL};

static const float W3[] = {-0.3233681, -0.4261553, -0.6519891, 0.79061985, -0.2210753, 0.037107922, 0.3984157, 0.22128074, 0.7975414, 0.2549885, 0.3076058, 0.62500215, -0.58958095, 0.20375429, -0.06477713, -1.566038, -0.37670124, -0.6443057};
static const float B3[] = {-0.829373, -0.14096421};

static const float W2[] = {0.0070440695, 0.23192555, 0.036849476, -0.14687373, -0.15593372, 0.0044246824, 0.27322513, -0.027562773, 0.23404223, -0.6354651, -0.55645454, -0.77057034, 0.15603222, 0.71015775, 0.23954256, 1.8201442, -0.018377468, 1.5745461, 1.7230825, -0.59662616, 1.3997843, 0.33511618, 0.56846994, 0.3797911, 0.035079807, -0.18287429, -0.032232445, 0.006910181, -0.0026898328, -0.0057844054, 0.29354542, 0.13796881, 0.3558416, 0.0022847173, 0.0025906325, -0.022641085};
static const float B2[] = {-0.11655525, -0.0036503011};

static const float W1[] = {0.15791991, -0.22649878, 0.021204736, 0.025593571, 0.008755621, -0.775102, -0.41594088, -0.12580238, -0.3963741, 0.33545518, -0.631953, -0.028754484, -0.50668705, -0.3574023, -3.7807872, -0.8261617, 0.102246165, 0.571127, -0.6256297, 0.06698781, 0.55969477, 0.25374785, -3.075965, -0.6959133, 0.2531965, 0.31739804, -0.8664238, 0.12750633, 0.83136076, 0.2666574, -2.5865922, -0.572031, 0.29743987, 0.16238026, -0.99154145, 0.077973805, 0.8913329, 0.16854058, -2.5247803, -0.5639109, 0.41671264, -0.10801031, -1.0229865, 0.2062031, 0.39889312, -0.16026731, -1.9185526, -0.48375717, 0.057339806, -1.2573057, -0.23117211, 1.051854, -0.7981992, -1.6263007, -0.26003376, -0.07649365, -0.4646075, 0.755821, 0.13187818, 0.24743222, -1.5276812, 0.1636555, -0.075465426, -0.058517877, -0.33852127, 1.3052516, 0.14443535, 0.44080895, -0.31031442, 0.15416017, 0.0053661224, -0.03175326, -0.15991405, 0.66121936, 0.0832211, 0.2651985, -0.038445678, 0.18054117, -0.0073251156, 0.054193687, -0.014296916, 0.30657783, 0.006181963, 0.22319937, 0.030315898, 0.12695274, -0.028179673, 0.11189027, 0.035358384, 0.046855893, -0.026528472, 0.26450494, 0.069981076, 0.107152134, -0.030371506, 0.09524366, 0.24802336, -0.36496836, -0.102762334, 0.49609017, 0.04002767, 0.020934932, -0.054773595, 0.05412083, -0.071876526, -1.5381132, -0.2356421, 1.5890793, -0.023087852, -0.24933836, 0.018771818, 0.08040064, 0.051946845, 0.6141782, 0.15780787, 0.12887044, -0.8691056, 1.3761537, 0.43058, 0.13476849, -0.14973496, 0.4542634, 0.13077497, 0.23117822, 0.003657386, 0.42742714, 0.23396699, 0.09209521, -0.060258932, 0.4642852, 0.10395402, 0.25047097, -0.05326261, 0.21466804, 0.11694269, 0.22402634, 0.12639907, 0.23495848, 0.12770525, 0.3324459, 0.0140223345, 0.106348366, 0.10877733, 0.30522102, 0.31412345, -0.07164018, 0.13483422, 0.45414954, 0.054698735, 0.07451815, 0.097312905, 0.27480683, 0.4866108, -0.43636885, -0.13586079, 0.5724732, 0.13595985, -0.0074526076, 0.11859829, 0.24481037, -0.37537888, -0.46877658, -0.5648533, 0.86578417, 0.3407381, -0.17214134, 0.040683553, 0.3630519, 0.089548275, -0.4989473, 0.47688767, 0.021731026, 0.2856471, 0.6174715, 0.7059148, -0.30635756, -0.5705427, -0.20692639, 0.041900065, 0.23040071, -0.1790487, -0.023751246, 0.14114629, 0.02345284, -0.64177734, -0.069909826, -0.08587972, 0.16460821, -0.53466517, -0.10163383, -0.13119817, 0.14908728, -0.63503706, -0.098961875, -0.23248474, 0.15406314, -0.48586813, -0.1904713, -0.20466608, 0.10629631, -0.5291871, -0.17358926, -0.36273107, 0.12225631, -0.38659447, -0.24787207, -0.25225234, 0.102635615, -0.14507034, -0.10110793, 0.043757595, -0.17158166, -0.031343404, -0.30139172, -0.09401665, 0.06986169, -0.54915506, 0.66843456, 0.14574362, -0.737502, 0.7700305, -0.4125441, 0.10115133, 0.05281194, 0.25467375, 0.22757779, -0.030224197, -0.0832025, -0.66385627, 0.51225215, -0.121023245, -0.3340579, -0.07505331, -0.09820366, -0.016041134, -0.03187605, -0.43589246, 0.094394326, -0.04983066, -0.0777906, -0.12822862, -0.089667186, -0.07014707, -0.010794195, -0.29095307, -0.01319235, -0.039757702, -0.023403417, -0.15530063, -0.052093383, -0.1477549, -0.07557954, -0.2686017, -0.035220042, -0.095615104, -0.015471024, -0.03906604, 0.024237331, -0.19604297, -0.19998372, -0.20302829, -0.04267139, -0.18774728, -0.045169186, -0.010131819, 0.14829905, -0.117015064, -0.4180649, -0.20680964, -0.024034742, -0.15787442, -0.055698488, -0.09037726, 0.40253848, -0.35745984, -0.786149, -0.0799551, 0.16205557, -0.14461482, -0.2749642, 0.2683253, 0.6881363, -0.064145364, 0.11361358, 0.59981894, 1.2947721, -1.2500908, 0.6082035, 0.12344158, 0.15808935, -0.17505693, 0.03425684, 0.39107767, 0.23190938, -0.7568858, 0.20042256, 0.079169095, 0.014275463, -0.12135842, 0.008516737, 0.26897284, 0.05706199, -0.52615446, 0.12489152, 0.08065737, -0.038548164, -0.08894516, 7.250979E-4, 0.28635752, -0.010820533, -0.39301336, 0.11144395, 0.06563818, -0.033744805, -0.07450528, -0.027328406, 0.3002447, 0.0029921278, -0.47954947, -0.04527057, -0.010289918, 0.039380465, -0.09236952, -0.1924659, 0.15401903, 0.21237805, -0.38984418, -0.37384143, -0.20648403, 0.29201767, -0.1299253, -0.36048025, -0.5544466, 0.45723814, -0.35266167, -0.94797707, -1.2481197, 0.88701195, 0.33620682, 0.0035414647, -0.22769359, 1.4563162, 0.54950374, 0.38396382, -0.41196275, 0.3758704, 0.17687413, 0.038129736, 0.16358295, 0.70515764, 0.055063568, 0.6445265, -0.2072113, 0.14618243, 0.10311305, 0.1971523, 0.174206, 0.36578146, -0.09782787, 0.5229244, -0.18459272, -0.0013945608, 0.08863555, 0.24184574, 0.15541393, 0.1722381, -0.10531331, 0.38215113, -0.30659106, -0.16298945, 0.11549875, 0.30750987, 0.1586183, -0.017728966, -0.050216004, 0.26232007, -1.2994286, -0.22700997, 0.108534105, 0.7447398, -0.39803517, 0.016863048, 0.10067235, -0.16355589, -0.64953077, -0.5674107, 0.017935256, 0.98968256, -1.395801, 0.44127485, 0.16644385, -0.19195901};
static const float B1[] = {1.2019119, -1.1770505, 2.1698284, -1.9615222};

static const float W[] = {0.55808353, 0.78707385, -0.040990848, -0.122510895, -0.41261443, -0.036044, 0.1691557, -0.14711425, -0.016407091, -0.28058195, 0.018765535, 0.062936015, 0.49562064, 0.33931744, -0.47547337, -0.1405672, -0.88271654, 0.18359914, 0.020887045, -0.13782434, -0.052250575, 0.67922074, -0.28022966, -0.31278887, 0.44416663, -0.26106882, -0.32219923, 1.0321393, -0.1444394, 0.5221766, 0.057590708, -0.96547794, -0.3051688, 0.16859075, -0.5320585, 0.42684716, -0.5434046, 0.014693736, 0.26795483, 0.15921915};
static const float B[] = {0.041442648, 1.461427, 0.07154641, -1.2774754, 0.80927604, -1.6933714, -0.29740578, -0.11774022, 0.3292682, 0.6596958};

// ASCII lib from (https://www.jianshu.com/p/1f58a0ebf5d9)
const char codeLib[] = "@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'.   ";
void print_img(const float * buf)
{
    for(int y = 0; y < 28; y++) 
    {
        for (int x = 0; x < 28; x++) 
        {
            int index = 0; 
            if(buf[y*28+x] > 0.6f) index =69;
            if(index < 0) index = 0;
            printf("%c",codeLib[index]);
            printf("%c",codeLib[index]);
        }
        printf("\n");
    }
}
