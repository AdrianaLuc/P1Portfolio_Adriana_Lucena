//
// Created by adria on 16.02.2024.
//

#include "Flower.h"

float Plants::Flower::calculateAverageHeight(float timeInDays) {
    this->averageHeight =  this->seeds.seedDiameter + timeInDays * this->growthRate;
    if (this->averageHeight <= 0.3) {
        return this->averageHeight;
    } else {
        return 0.3;
    }
}
