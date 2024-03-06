//
// Created by adria on 06.03.2024.
//

#pragma once
#include "BaseCar.h"
#include "EngineDuratecV1.h"
#include "BrakesDuratecV1.h"
#include "SuspensionDuratecV1.h"
#include "FrameDuratecV1.h"
#include "GearsDuratecV1.h"
#include "WheelDuratecV1.h"

namespace car {

    class BMW : public car::BaseCar {
    public:
        BMW();
        void accelerate(int _time) override;
        void deaccelerate(int _time) override;
        void brake() override;
    };
}



