//
// Created by adria on 16.02.2024.
//

#pragma once
#include "iostream"
#include "Plant.h"

namespace plants{
    class Grass : public Plant{
    public:
        Grass(): Plant("Grass", "green", 0.3, 0.01){};
        float calculateAverageHeight(float _timeInDays) override;
    };
}




