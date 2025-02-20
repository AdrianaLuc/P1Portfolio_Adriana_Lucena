//
// Created by adria on 15.02.2024.
//

#include <memory>
#include <limits>
#include "iostream"
#include "mainFunctions.h"
#include "Tree.h"

int main() {

    std::shared_ptr<plants::Plant> p_plant = nullptr;
    bool exit = false;
    int choice;

    info();
    choosePlant(p_plant);

    // Main loop
    while (!exit) {
        std::cout << "\nEnter 1 to get the average height of the plant.";
        std::cout << "\nEnter 2 to get the leaf color of the plant.";
        std::cout << "\nEnter 3 to get the seed diameter of the plant.";
        std::cout << "\nEnter 4 to choose a different plant";
        std::cout << "\nEnter 5 to exit";

        // Check for valid input
        if (!(std::cin >> choice)) {
            std::cin.clear(); // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "Invalid input. Please try again!\n";
            continue; // Restart the loop
        }

        // call getAverageHeight or getLeafColor or getSeedDiameter based on user input
        switch (choice) {
            case 1:
                getAverageHeight(p_plant);
                break;
            case 2:
                std::cout << "The leaf color of the " << p_plant->getName() << " is: " << p_plant->getLeafColor()
                          << "\n";
                break;
            case 3:
                std::cout << "The seed diameter of the " << p_plant->getName() << " is: " << p_plant->getSeedDiameter()
                          << " centimeters.\n";
                break;
            case 4:
                choosePlant(p_plant);
                break;
            case 5:
                exit = true;
                std::cout << "\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }


    return 0;

}