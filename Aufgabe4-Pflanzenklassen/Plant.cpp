//
// Created by adria on 15.02.2024.
//

#include "Plant.h"

// getter
std::string Plants::Plant::getLeafColor() {
    return this->leafs.leafColor;
}

float Plants::Plant::getSeedDiameter() {
    return this->seeds.seedDiameter;
}

// setter
void Plants::Plant::setLeafColor(std::string _leafColor) {
    this->leafs.leafColor = _leafColor;
}

void Plants::Plant::setSeedDiameter(float _seedDiameter) {
    this->seeds.seedDiameter = _seedDiameter;
}
