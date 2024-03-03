//
// Created by adria on 03.03.2024.
//

#pragma once
#include <memory>
#include "iostream"

class MyCppArray {
public:
    MyCppArray(int _inputSize);

    std::shared_ptr<int> array;
    int size = 0;

    int numberOfElements();
    int smallestNumber();
    int biggestNumber();
    int specificNumber(int _inputInt);
};






