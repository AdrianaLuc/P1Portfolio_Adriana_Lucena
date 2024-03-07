//
// Created by adria on 16.02.2024.
//

#include "Flower.h"

float plants::Flower::calculateAverageHeight(float _timeInDays) {
    this->averageHeight =  this->seeds.seedDiameter + _timeInDays * this->growthRate;
    if (this->averageHeight <= 0.3) {
        return this->averageHeight;
    } else {
        return 0.3;
    }
}
