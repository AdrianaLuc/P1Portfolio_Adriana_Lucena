//
// Created by adria on 20.02.2024.
//

#pragma once
#include "iostream"

namespace car::component {

    class Wheel {
    public:
        Wheel(std::string _name, int _powerTransmission) : name(_name), powerTransmission(_powerTransmission){};

        std::string getName();
        int getPowerTransmission();

    protected:
        std::string name;
        int powerTransmission;
    };
}



