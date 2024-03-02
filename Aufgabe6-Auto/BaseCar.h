//
// Created by adria on 20.02.2024.
//
#pragma once
#include "Breaks.h"
#include "Engine.h"
#include "Frame.h"
#include "Gears.h"
#include "Suspension.h"
#include "Wheel.h"


class BaseCar {
public:
    virtual void accelerate() = 0;
    void deaccelerate();
    void goBackwards();
    void goLeft();
    void goRight();
    void startEngine();
    void stopEngine();
protected:
    CarParts::Engine engine;
    CarParts::Frame frame;
    CarParts::Gears gears;
    CarParts::Suspension suspension[4];
    CarParts::Wheel wheel[4];
    CarParts::Breaks breaks;

    int speed = 0;
    bool engineOn = false;
};


