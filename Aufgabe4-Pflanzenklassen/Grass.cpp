//
// Created by adria on 16.02.2024.
//

#include "Grass.h"

float plants::Grass::calculateAverageHeight(float timeInDays) {
    this->averageHeight = this->seeds.seedDiameter + timeInDays * this->growthRate;
    if (this->averageHeight <= 1) {
        return this->averageHeight;
    } else {
        return 1;
    }
}
