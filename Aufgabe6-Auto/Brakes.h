//
// Created by adria on 20.02.2024.
//

#pragma once
#include "iostream"

namespace car::component {

    class Brakes {
    public:
        Brakes(std::string _name, int _friction) : name(_name), friction(_friction){};

        std::string getName();
        int getFriction();

    protected:
        const std::string name;
        const float friction;
    };
}
