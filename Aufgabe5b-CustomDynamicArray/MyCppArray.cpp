//
// Created by adria on 03.03.2024.
//

#include "MyCppArray.h"

// andere Varianten auf dem Heap zu allokieren nochmal anschauen
MyCppArray::MyCppArray(int _inputSize) : size(_inputSize) {
    if (_inputSize >= 0) {
        p_array = new int[_inputSize];
    } else {
        throw std::invalid_argument("Invalid size");
    }
}

MyCppArray::~MyCppArray() {
    delete[] p_array;
}

int MyCppArray::numberOfElements() {
    return size;
}

int MyCppArray::smallestNumber() {
    int smallest = p_array[0];
    for (int i = 0; i < numberOfElements(); i++) {
        if (p_array[i] < smallest) {
            smallest = p_array[i];
        }
    }
    return smallest;
}

int MyCppArray::biggestNumber() {
    int biggest = p_array[0];
    for (int i = 0; i < numberOfElements(); i++) {
        if (p_array[i] > biggest) {
            biggest = p_array[i];
        }
    }
    return biggest;
}

// Problem: bei Doppelung einer Nummer wird nur der Index der ersten Nummer im Array angegeben
int MyCppArray::specificNumberIndex(int _inputInt) {
    for (int i = 0; i < numberOfElements(); i++) {
        if (p_array[i] == _inputInt) {
            return i;
        }
    }
    return -1;
}

void MyCppArray::resize(int _inputSize) {
    delete[] p_array;
    size = _inputSize;
    p_array = new int[_inputSize];
}




