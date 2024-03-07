//
// Created by adria on 05.03.2024.
//

#pragma once
#include "Brakes.h"

namespace car::component {

    class BrakesDuratecV1 : public car::component::Brakes {
    public:
        BrakesDuratecV1() : Brakes("Brakes DuratecV1", 10.0f) {};
    };
}
