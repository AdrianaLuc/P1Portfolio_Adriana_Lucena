//
// Created by adria on 15.02.2024.
//

#include "Plant.h"

// getter
std::string Plants::Plant::getLeafColor() {
    return this->leafColor;
}

float Plants::Plant::getSeedDiameter() {
    return this->seedDiameter;
}

// setter
void Plants::Plant::setLeafColor(std::string leafColor) {
    this->leafColor = leafColor;
}

void Plants::Plant::setSeedDiameter(float seedDiameter) {
    this->seedDiameter = seedDiameter;
}
