#ifndef RELU_H
#define RELU_H
#include "baselayer.h"
using namespace std;

class Relu : public BaseLayer
{
public:
    Relu(const string &name, shared_ptr<BaseLayer> inLayer){
        m_inputLayer = inLayer;
        m_name = name;
    }
    Tensor<float> ForwardPropagation(const Tensor<float> &input) override{
        Tensor<float> activation;
        activation.SetDims(input.GetDims());
        return activation;
    }
    Tensor<float> BackwardPropagation() override{
        Tensor<float> gradient;
        return gradient;
    }
};

#endif // RELU_H
