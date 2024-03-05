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
    this->engineOn = true;
}

void car::component::Engine::stopEngine() {
    this->engineOn = false;
}

std::string car::component::Engine::getName() {
    return this->name;
}
