//
// Created by adria on 03.03.2024.
//

#include "MyCppArray.h"

// andere Varianten auf dem Heap zu allokieren nochmal anschauen
MyCppArray::MyCppArray(int _inputSize) : size(_inputSize) {
    //array = std::shared_ptr<int>(new int[_inputSize]);
    if (_inputSize >= 0) {
        array = std::make_shared<int>(_inputSize);
    } else {
        throw std::invalid_argument("Invalid size");
    }
}

int MyCppArray::numberOfElements() {
    return size;
}

int MyCppArray::smallestNumber() {
    int smallest = array.get()[0];
    for (int i = 0; i < numberOfElements(); i++) {
        if (array.get()[i] < smallest) {
            smallest = array.get()[i];
        }
    }
    return smallest;
}

int MyCppArray::biggestNumber() {
    int biggest = array.get()[0];
    for (int i = 0; i < numberOfElements(); i++) {
        if (array.get()[i] < biggest) {
            biggest = array.get()[i];
        }
    }
    return biggest;
}

// Problem: bei Doppelung einer Nummer wird nur der Index der ersten Nummer im Array angegeben
int MyCppArray::specificNumber(int _inputInt) {
    for (int i = 0; i < numberOfElements(); i++) {
        if (array.get()[i] == _inputInt) {
            return i;
        }
    }
    return -1;
}



