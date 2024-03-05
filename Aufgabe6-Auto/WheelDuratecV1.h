//
// Created by adria on 05.03.2024.
//

#pragma once
#include "Wheel.h"

namespace car::component {

    class WheelDuratecV1 : public car::component::Wheel {
    public:
        WheelDuratecV1() : Wheel("Wheel DuratecV1", 2) {}

    };
}

