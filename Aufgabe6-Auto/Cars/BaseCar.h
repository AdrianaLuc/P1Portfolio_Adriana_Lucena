//
// Created by adria on 20.02.2024.
//
#pragma once

#include <memory>
#include "iostream"
#include "../CarComponents/Brakes/Brakes.h"
#include "../CarComponents/Engines/Engine.h"
#include "../CarComponents/Frames/Frame.h"
#include "../CarComponents/Gears/Gears.h"
#include "../CarComponents/Suspensions/Suspension.h"
#include "../CarComponents/Wheels/Wheel.h"

namespace car {

    class BaseCar {
    public:
        BaseCar() = default;
        virtual void accelerate(int _time) = 0;
        virtual void deaccelerate() = 0;
        void brake();
        void goLeft();
        void goRight();
        //void goBackwards(); -> is the same as deaccelerate().

    protected:
        std::shared_ptr<component::Engine> p_engine;
        std::shared_ptr<component::Brakes> p_brakes;
        std::shared_ptr<component::Frame> p_frame;
        std::shared_ptr<component::Gears> p_gears;
        std::shared_ptr<component::Suspension> p_suspensions[4];
        std::shared_ptr<component::Wheel> p_wheels[4];

        int currentspeed = 0;
    };
}
