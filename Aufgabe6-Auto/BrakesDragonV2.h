//
// Created by adria on 05.03.2024.
//

#pragma once
#include "Brakes.h"

namespace car::component {

    class BrakesDragonV2 : public car::component::Brakes {
    public:
        BrakesDragonV2() : Brakes("Brakes DragonV2", 10) {};
    };
}
