//
// Created by adria on 16.02.2024.
//

#include "mainFunctions.h"

void info(){
    std::cout << "This is a programme for getting information about certain plants." << std::endl;
    std::cout << "To get information about the plant, enter the name of the plant and follow the instructions. (tree, flower, grass or shrub)" << std::endl;
}

std::string askPlantName(){
    std::string name;
    std::cout << "Enter name of plant: " << std::endl;
    std::cin >> name;
    if (name == "tree" || name == "flower" || name == "grass" || name == "shrub"){
        return name;
    } else {
        throw std::invalid_argument("Invalid plant name. Please try again.");
    }
}

void plantInfo(Plants::Plant* _plant){
    std::cout << "Enter 1 to get the average height of the plant." << std::endl;
    std::cout << "Enter 2 to get the leaf color of the plant." << std::endl;
    std::cout << "Enter 3 to get the seed diameter of the plant." << std::endl;
    //std::cout << "Enter 4 to get the root length of the plant." << std::endl;

    int choice;
    std::cin >> choice;

    if (std::cin.good()) {
        switch (choice) {
            case 1:
                getAverageHeight(_plant);
                break;
            case 2:
                std::cout << "The leaf color of the chosen plant is: " << _plant->getLeafColor() << std::endl;
                break;
            case 3:
                std::cout << "The seed diameter of the chosen plant is: " << _plant->getSeedDiameter() << " centimeters." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}

void getAverageHeight(Plants::Plant* _plant){
    float timeInDays;
    std::cout << "Please enter the amount of time in days to calculate the average height of the chosen plant: " << std::endl;
    std::cin >> timeInDays;
    if (timeInDays >= 0){
        std::cout << "After " << timeInDays << " days, the average height of the chosen plant is: " << _plant->calculateAverageHeight(timeInDays) << " meters." << std::endl;
    } else {
        std::cout << "Time must be > 0." << std::endl;
    }
}