//
// Created by adria on 05.03.2024.
//

#pragma once
#include "Wheel.h"

namespace car::component {

    class WheelDragonV2 : public car::component::Wheel {
    public:
        WheelDragonV2() : car::component::Wheel("Wheel DragonV2", 1.009) {}

    };
}