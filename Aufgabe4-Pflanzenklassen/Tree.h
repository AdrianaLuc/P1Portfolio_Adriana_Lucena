//
// Created by adria on 16.02.2024.
//

#pragma once

#include "Plant.h"
#include "iostream"

namespace plants {

    class Tree : public Plant {
    public:
        Tree(): Plant("Tree", "green", 0.5, 0.005){};
        float calculateAverageHeight(float _timeInDays) override;
    };
}


