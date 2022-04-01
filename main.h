#pragma once

#include <vector>

template<typname T>
T RandomFunction(T & newVariable) {
    std::vector<T> varVector;
    varVector.push_back(newVariable);
    return varVector;
}

// very nice
