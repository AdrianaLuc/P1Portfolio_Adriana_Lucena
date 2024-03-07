//
// Created by adria on 06.03.2024.
//

#include <limits>
#include "mainFunctions.h"
#include "Ford.h"
#include "BMW.h"

void chooseCar(std::shared_ptr<car::BaseCar> &_p_car) {
    int choice = 0;
    bool exit = false;

    while (!exit) {
        std::cout << "\n Please choose a car: \n 1. Ford \n 2. BMW "
                     "\n Please enter a number: \n";

        if (!(std::cin >> choice)) {
            std::cin.clear(); // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "Invalid input. Please try again!\n";
            continue; // Restart the loop
        }

        if (choice == 1) {
            _p_car = std::make_shared<car::Ford>();
            std::cout << "You have chosen the Ford!" << std::endl;
            exit = true; // Exit the loop
        } else if (choice == 2) {
            _p_car = std::make_shared<car::BMW>();
            std::cout << "You have chosen the BMW!" << std::endl;
            exit = true; // Exit the loop
        } else {
            std::cout << "Invalid input. Please try again!\n";
        }

        // if anything else but 1 or 2 is entered
        std::cin.clear(); // clears the fail state so that future input operations can be attempted.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discards the invalid input (up to the maximum stream size or until a newline character is encountered).
    }
}

float askForTimeInSeconds(){
    float timeInSeconds = 0;
    bool exit = false;

    while (!exit) {
        std::cout << "\nPlease input the time in seconds:\n ";

        if (!(std::cin >> timeInSeconds)) {
            std::cin.clear(); // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "Invalid input. Please try again!\n";
            continue; // Restart the loop
        } else if (timeInSeconds <= 0) {
            std::cout << "Invalid input. Please try again!\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard newline character
            continue; // Restart the loop
        } else {
            exit = true; // Exit the loop
        }
    }
    return timeInSeconds;
}