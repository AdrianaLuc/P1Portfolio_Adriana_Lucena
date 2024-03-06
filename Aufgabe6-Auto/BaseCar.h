//
// Created by adria on 20.02.2024.
//
#pragma once

#include <memory>
#include "iostream"
#include "Brakes.h"
#include "Engine.h"
#include "Frame.h"
#include "Gears.h"
#include "Suspension.h"
#include "Wheel.h"

namespace car {

    class BaseCar {
    public:
        BaseCar() = default;

        std::shared_ptr<car::component::Engine> getEngine();
        std::shared_ptr<car::component::Brakes> getBrakes();
        std::shared_ptr<car::component::Frame> getFrame();
        std::shared_ptr<car::component::Gears> getGears();
        std::shared_ptr<car::component::Suspension> getSuspensions();
        std::shared_ptr<car::component::Wheel> getWheels();

        std::string getName();

        virtual void accelerate(float _time) = 0;
        virtual void deaccelerate(float _time) = 0;
        virtual void brake(float _time) = 0;
        void goLeft();
        void goRight();
        void goByCurrentSpeed();
        //void goBackwards(); -> is the same as deaccelerate().

    protected:
        std::shared_ptr<car::component::Engine> p_engine;
        std::shared_ptr<car::component::Brakes> p_brakes;
        std::shared_ptr<car::component::Frame> p_frame;
        std::shared_ptr<car::component::Gears> p_gears;
        std::shared_ptr<car::component::Suspension> p_suspensions;
        std::shared_ptr<car::component::Wheel> p_wheels;

        float currentspeed = 0;
        std::string name;
    };
}
