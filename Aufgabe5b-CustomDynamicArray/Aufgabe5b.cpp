//
// Created by adria on 03.03.2024.
//

#include <iostream>
#include "MyCppArray.h"

int main() {

    srand(time(nullptr));

    MyCppArray arr(100);
    bool quit = false;

    while (!quit) {

        // fill array with random numbers
        for (int i = 0; i < arr.numberOfElements(); i++) {
            arr.p_array[i] = rand() % 100;
        }

        std::cout << "Number of elements: " << arr.numberOfElements() << std::endl;
        std::cout << "Smallest number: " << arr.smallestNumber() << std::endl;
        std::cout << "Biggest number: " << arr.biggestNumber() << std::endl;

        int inputInt;
        std::cout << "Enter a number to get its index. If the output is -1, the number is not in the array."
                  << std::endl;
        std::cin >> inputInt;
        std::cout << "Index: " << arr.specificNumberIndex(inputInt) << std::endl;

        std::cout << "Current size: " << arr.numberOfElements() << std::endl;
        std::cout << "Enter new size:" << std::endl;
        int newSize;
        std::cin >> newSize;
        arr.resize(newSize);
        std::cout << "New size: " << arr.numberOfElements() << std::endl;

        std::cout << "Quit? yes = 1; no = 0" << std::endl;
        std::cin >> quit;
    }

    return 0;
}