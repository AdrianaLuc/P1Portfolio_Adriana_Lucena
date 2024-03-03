//
// Created by adria on 02.03.2024.
//

#include "MyCppArray.h"


int MyCppArray::numberOfElements() {
    int size = 0;
    for (auto i : array) {
        size += 1;
    }
    return size;
}

int MyCppArray::smallestNumber() {
    int smallest = array[0];
    for (auto i : array) {
        if (i < smallest) {
            smallest = i;
        }
    }
    return smallest;
}

int MyCppArray::biggestNumber() {
    int biggest = array[0];
    for (auto i : array) {
        if (i > biggest) {
            biggest = i;
        }
    }
    return biggest;
}

// Problem: bei Doppelung einer Nummer wird nur der Index der ersten Nummer im Array angegeben
int MyCppArray::specificNumber(int _inputInt) {
    for (int i = 0; i < numberOfElements(); i++) {
        if (array[i] == _inputInt) {
            return i;
        }
    }
    return -1;
}

