//
// Created by adria on 16.02.2024.
//

#pragma once
#include "Plant.h"

namespace Plants {
    class Flower : public Plant {
    public:
        Flower(): Plant("Flower", "white", 0.1, 0.005){};
        float calculateAverageHeight(float timeInDays) override;
    };
}




