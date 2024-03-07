//
// Created by adria on 16.02.2024.
//

#pragma once
#include "Plant.h"

namespace plants {
    class Flower : public Plant {
    public:
        Flower(): Plant("Flower", "white", 0.1, 0.005){};
        float calculateAverageHeight(float _timeInDays) override;
    };
}




