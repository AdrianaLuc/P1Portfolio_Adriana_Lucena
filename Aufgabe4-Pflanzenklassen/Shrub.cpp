//
// Created by adria on 16.02.2024.
//

#include "Shrub.h"

float plants::Shrub::calculateAverageHeight(float _timeInDays) {
    this->averageHeight = this->seeds.seedDiameter + _timeInDays * this->growthRate;
    if (this->averageHeight <= 3) {
        return this->averageHeight;
    } else {
        return 3;
    }
}
