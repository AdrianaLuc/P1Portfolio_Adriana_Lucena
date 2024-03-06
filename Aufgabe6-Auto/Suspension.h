//
// Created by adria on 20.02.2024.
//

#pragma once
#include "iostream"

namespace car::component {

    class Suspension {
    public:
        Suspension(std::string _name, float _shockAbsorption) : name(_name), shockAbsorption(_shockAbsorption){};

        std::string getName();
        int getShockAbsorption();

    private:
        std::string name;
        float shockAbsorption;
    };
}
