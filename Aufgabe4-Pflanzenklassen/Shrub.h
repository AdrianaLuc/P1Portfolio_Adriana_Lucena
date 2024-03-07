//
// Created by adria on 16.02.2024.
//

#pragma once
#include "Plant.h"

namespace plants {
    class Shrub : public Plant {
    public:
        Shrub(): Plant("Shrub", "brown",0.2, 0.006){};
        float calculateAverageHeight(float _timeInDays) override;
    };
}




