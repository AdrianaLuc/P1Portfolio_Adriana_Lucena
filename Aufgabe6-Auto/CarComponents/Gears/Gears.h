//
// Created by adria on 20.02.2024.
//

#pragma once
#include "iostream"

namespace car::component {

    enum gearShift
    {
        REVERSE = -1,
        NEUTRAL = 0,
        FIRST = 1,
        SECOND = 2,
        THIRD = 3,
        FOURTH = 4,
        FIFTH = 5,
    };

    class Gears {
    public:
        Gears(std::string _name) : name(_name){};

        gearShift getCurrentGear();
        void setGear(gearShift _gear);

    protected:
        std::string name;
        gearShift currentGear = NEUTRAL;
    };
}


