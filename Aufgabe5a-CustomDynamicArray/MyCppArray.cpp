//
// Created by adria on 02.03.2024.
//

#include "MyCppArray.h"


int MyCppArray::numberOfElements() {
    // increase size for every element
    int size = 0;
    for (auto i : array) {
        size += 1;
    }
    return size;
}

int MyCppArray::smallestNumber() {
    // check for every element if it is smaller than the current smallest
    int smallest = array[0];
    for (auto i : array) {
        if (i < smallest) {
            smallest = i;
        }
    }
    return smallest;
}

int MyCppArray::biggestNumber() {
    // check for every element if it is bigger than the current biggest
    int biggest = array[0];
    for (auto i : array) {
        if (i > biggest) {
            biggest = i;
        }
    }
    return biggest;
}

// Problem: bei Doppelung einer Nummer wird nur der Index der ersten Nummer im Array angegeben
int MyCppArray::specificNumberIndex(int _inputInt) {
    // check every element if it is equal to the input and output its index
    for (int i = 0; i < numberOfElements(); i++) {
        if (array[i] == _inputInt) {
            return i;
        }
    }
    return -1;
}

