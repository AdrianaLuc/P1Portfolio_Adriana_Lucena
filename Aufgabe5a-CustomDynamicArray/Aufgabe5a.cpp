//
// Created by adria on 02.03.2024.
//

#include "MyCppArray.h"

int main() {

    srand(time(nullptr));

    MyCppArray arr;

    // Fill array with random numbers
    for (int i = 0; i < arr.numberOfElements(); i++) {
        arr.array[i] = rand() % 100;
    }

    // Print all MyCppArray functions
    std::cout << "Number of elements: " << arr.numberOfElements() << std::endl;
    std::cout << "Smallest number: " << arr.smallestNumber() << std::endl;
    std::cout << "Biggest number: " << arr.biggestNumber() << std::endl;

    int inputInt;
    std::cout << "Enter a number to get its index. If the output is -1, the number is not in the array." << std::endl;
    std::cin >> inputInt;
    std::cout << "Index: " << arr.specificNumberIndex(inputInt) << std::endl;

    return 0;
}