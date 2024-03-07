//
// Created by adria on 16.02.2024.
//

#include "Grass.h"

float plants::Grass::calculateAverageHeight(float _timeInDays) {
    this->averageHeight = this->seeds.seedDiameter + _timeInDays * this->growthRate;
    if (this->averageHeight <= 1) {
        return this->averageHeight;
    } else {
        return 1;
    }
}
