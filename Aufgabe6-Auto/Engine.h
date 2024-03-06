//
// Created by adria on 20.02.2024.
//

#pragma once
#include "iostream"

namespace car::component {

    class Engine {
    public:
        Engine(std::string _name, float _acceleration) :name(_name), acceleration(_acceleration) {};

        std::string getName();
        float getAcceleration();
        bool isEngineOn();
        void startEngine();
        void stopEngine();

    protected:
        const std::string name;
        const float acceleration;
        bool engineOn = false;
    };
}
