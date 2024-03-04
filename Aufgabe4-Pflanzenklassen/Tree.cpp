//
// Created by adria on 16.02.2024.
//

#include "Tree.h"

float Plants::Tree::calculateAverageHeight(float timeInDays) {
    this->averageHeight = this->seeds.seedDiameter + timeInDays * this->growthRate;
    if (this->averageHeight <= 12) {
        return this->averageHeight;
    } else {
        return 12;
    }
}
