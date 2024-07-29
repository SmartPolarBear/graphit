//
// Created by KeZheng Xiong on 7/28/24.
//

#pragma once
#include <memory>
#include <string>

#include <tensor.hpp>

namespace graphit::value {
    template<typename TData>
    class Value {
    public:
        using UnderlyingTensorType = Tensor<TData>;

    public:
        ~Value() = default;

        // Get the value
        UnderlyingTensorType get();

        // Print the value
        std::string str();

    private:
        UnderlyingTensorType value_;
    };


}
