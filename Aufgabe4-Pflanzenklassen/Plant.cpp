//
// Created by adria on 15.02.2024.
//

#include "Plant.h"

// getter
std::string plants::Plant::getLeafColor() {
    return this->leafs.leafColor;
}

float plants::Plant::getSeedDiameter() {
    return this->seeds.seedDiameter;
}

// setter
void plants::Plant::setLeafColor(std::string _leafColor) {
    this->leafs.leafColor = _leafColor;
}

void plants::Plant::setSeedDiameter(float _seedDiameter) {
    this->seeds.seedDiameter = _seedDiameter;
}

std::string plants::Plant::getName() {
    return this->name;
}
