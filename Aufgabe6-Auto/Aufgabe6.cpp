//
// Created by adria on 20.02.2024.
//

// TODO: Klassen in Ordnern ordnen (CMake!)
// TODO: raylib implementation
// TODO: wie funktionieren Autos????
// TODO: weird while loop erklären können.

#include <limits>
#include "iostream"
#include "Ford.h"
#include "BMW.h"
#include "mainFunctions.h"

int main() {

    std::shared_ptr<car::BaseCar> p_car = nullptr;
    int choice = 0;
    bool exit = false;

    chooseCar(p_car);

    // "Game Loop"
    while (!exit) {
        std::cout << "\n Controls: \n 1. Start engine  |  2. Accelerate  |  3. Go Backwards  |  4. Brake  "
                     "|  5. Go Left  |  6. Go Right  |  7. Change Car  |  8. Quit "
                     "\n Please choose a number: \n";

        if (!(std::cin >> choice)) {
            std::cin.clear(); // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "Invalid input. Please try again!\n";
            continue; // Restart the loop
        }

        // Code
        if (choice == 1) {
            p_car->getEngine()->startEngine();
        } else if (choice == 2) {
            p_car->accelerate(askForTimeInSeconds());
        } else if (choice == 3) {
            p_car->deaccelerate(askForTimeInSeconds());
        } else if (choice == 4) {
            p_car->brake();
        } else if (choice == 5) {
            p_car->goLeft();
        } else if (choice == 6) {
            p_car->goRight();
        } else if (choice == 7) {
            chooseCar(p_car);
        } else if (choice == 8) {
            exit = true; // Exit the loop
        } else if (choice == 9) {
            std::cout << p_car->getName() << std::endl;
        } else {
            std::cout << "Invalid input. Please try again!\n";
        }



        std::cin.clear(); // clears the fail state so that future input operations can be attempted.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discards the invalid input (up to the maximum stream size or until a newline character is encountered).
    }

    return 0;
}