//
// Created by adria on 16.02.2024.
//

#pragma once
#include "Plant.h"

namespace Plants {
    class Shrub : public Plant {
    public:
        Shrub(): Plant("brown",0.2, 0.006){};
        float calculateAverageHeight(float timeInDays) override;
    };
}




