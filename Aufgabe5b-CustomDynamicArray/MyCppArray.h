//
// Created by adria on 03.03.2024.
//

#pragma once
#include <memory>
#include "iostream"

class MyCppArray {
public:
    explicit MyCppArray(int _inputSize);
    ~MyCppArray();

    int* p_array;
    int size = 0;

    int numberOfElements();
    int smallestNumber();
    int biggestNumber();
    int specificNumberIndex(int _inputInt);
    void resize(int _inputSize);
};






