//
// Created by adria on 03.03.2024.
//

#include <iostream>
#include "MyCppArray.h"

int main() {

    // TODO: Erklären üben -> was genau ist der Unterschied zu Aufgabe 5a und was macht .get()?
    // TODO: shared pointer üben

    srand(time(nullptr));

    MyCppArray arr(100);

    for (int i = 0; i < arr.numberOfElements(); i++) {

    }

    /*arr.array[0] = 20;
    arr.array[1] = 5;
    arr.array[2] = 76;
    arr.array[3] = 1029;
    arr.array[4] = 32;*/

    std::cout << "Number of elements: " << arr.numberOfElements() << std::endl;
    std::cout << "Smallest number: " << arr.smallestNumber() << std::endl;
    std::cout << "Biggest number: " << arr.biggestNumber() << std::endl;

    int inputInt;
    std::cout << "Enter a number to get its index. If the output is -1, the number is not in the array." << std::endl;
    std::cin >> inputInt;
    std::cout << "Index: " << arr.specificNumber(inputInt) << std::endl;

    return 0;
}