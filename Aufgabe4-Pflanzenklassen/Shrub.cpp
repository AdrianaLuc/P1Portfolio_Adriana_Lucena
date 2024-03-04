//
// Created by adria on 16.02.2024.
//

#include "Shrub.h"

float Plants::Shrub::calculateAverageHeight(float timeInDays) {
    this->averageHeight = this->seeds.seedDiameter + timeInDays * this->growthRate;
    if (this->averageHeight <= 3) {
        return this->averageHeight;
    } else {
        return 3;
    }
}
