//
// Created by adria on 05.03.2024.
//

#pragma once
#include "BaseCar.h"
#include "EngineDragonV2.h"
#include "BrakesDragonV2.h"
#include "FrameDragonV2.h"
#include "GearsDragonV2.h"
#include "SuspensionDragonV2.h"
#include "WheelDragonV2.h"


namespace car {

    class Ford : public car::BaseCar {
    public:
        Ford();

        void accelerate(float _time) override;
        void deaccelerate(float _time) override;
        void brake() override;

    };
}

