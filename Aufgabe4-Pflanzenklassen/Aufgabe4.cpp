//
// Created by adria on 15.02.2024.
//

#include "iostream"
#include "mainFunctions.h"
#include "Tree.h"
#include "Flower.h"
#include "Grass.h"
#include "Shrub.h"

// TODO: calculate rootLength implementieren
// TODO: user mehr Abfragemöglichkeiten geben
// TODO: exit condition implementieren
// TODO: fix switch case breaking when invalid choice is entered
// TODO: Raylib Implementation
// TODO: blätter, wurzeln und samen als eigene Klasse implementieren?
// TODO: exceptions?

// TODO: delete pointer!!!

int main() {
    // Instances
    Plants::Tree tree;
    Plants::Flower flower;
    Plants::Grass grass;
    Plants::Shrub shrub;
    Plants::Plant* p_plant = nullptr;

    info();

    while (true) {
        std::string chosenPlant = askPlantName();

        if (chosenPlant == "tree") {
            p_plant = &tree;
        } else if (chosenPlant == "flower") {
            p_plant = &flower;
        } else if (chosenPlant == "grass") {
            p_plant = &grass;
        } else if (chosenPlant == "shrub") {
            p_plant = &shrub;
        } else {
            std::cout << "Invalid plant name. Please try again." << std::endl;
        }

        if (p_plant != nullptr) {
            plantInfo(p_plant);
        }

    }

    return 0;
}