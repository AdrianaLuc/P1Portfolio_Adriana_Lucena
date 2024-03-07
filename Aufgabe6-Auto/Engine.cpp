//
// Created by adria on 20.02.2024.
//

#include "Engine.h"

float car::component::Engine::getAcceleration() {
    return this->acceleration;
}

bool car::component::Engine::isEngineOn() {
    return this->engineOn;
}

void car::component::Engine::startEngine() {
    std::cout << "Engine started!\n";
    this->engineOn = true;
}

void car::component::Engine::stopEngine() {
    std::cout << "Engine stopped!\n";
    this->engineOn = false;
}

std::string car::component::Engine::getName() {
    return this->name;
}
