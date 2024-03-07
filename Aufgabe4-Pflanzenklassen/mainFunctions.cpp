//
// Created by adria on 16.02.2024.
//

#include <limits>
#include "mainFunctions.h"
#include "Tree.h"
#include "Flower.h"
#include "Grass.h"
#include "Shrub.h"

void info() {
    std::cout << "This is a program to inform you about certain plants." << std::endl;
}


void choosePlant(std::shared_ptr<plants::Plant>& _p_plant) {
    int choice;
    bool exit = false;

    while (!exit) {
        std::cout << "\nPlease choose a plant: 1. Tree  |  2. Flower  |  3. Grass  |  4. Shrub  |  5. Exit\n";
        std::cout << "Enter number: \n";

        // Check for valid input
        if (!(std::cin >> choice)) {
            std::cin.clear(); // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "Invalid input. Please try again!\n";
            continue; // Restart the loop
        }

        // allocate plant on heap based on user input
        switch (choice) {
            case 1:
                _p_plant = std::make_shared<plants::Tree>();
                std::cout << "Tree selected." << std::endl;
                exit = true;
                break;
            case 2:
                _p_plant = std::make_shared<plants::Flower>();
                std::cout << "Flower selected." << std::endl;
                exit = true;
                break;
            case 3:
                _p_plant = std::make_shared<plants::Grass>();
                std::cout << "Grass selected." << std::endl;
                exit = true;
                break;
            case 4:
                _p_plant = std::make_shared<plants::Shrub>();
                std::cout << "Shrub selected." << std::endl;
                exit = true;
                break;
            case 5:
                exit = true;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }
}

// this function asks the user for an int input (time in days) until the input is valid
void getAverageHeight(std::shared_ptr<plants::Plant>& _plant) {
    float timeInDays;
    bool exit = false;

    while (!exit) {
        std::cout << "\nPlease enter the amount of time (in days) to calculate the average height of the chosen plant: \n";

        // Check for invalid input
        if (!(std::cin >> timeInDays)) {
            std::cin.clear(); // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "\nInvalid input. Please try again!\n";
            continue; // Restart the loop
        }

        if (timeInDays >= 0) {
            std::cout << "After " << timeInDays << " days, the average height of the " << _plant->getName() << " is: "
                      << _plant->calculateAverageHeight(timeInDays) << " meters." << std::endl;
            exit = true;
        } else {
            std::cout << "Time must be > 0." << std::endl;
        }
    }
}