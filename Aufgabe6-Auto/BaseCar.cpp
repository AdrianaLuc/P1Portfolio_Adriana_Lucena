//
// Created by adria on 20.02.2024.
//

#include "BaseCar.h"


void car::BaseCar::goLeft() {
    std::cout << "turning left" << std::endl;
}

void car::BaseCar::goRight() {
    std::cout << "turning right" << std::endl;
}

std::shared_ptr<car::component::Engine> car::BaseCar::getEngine() {
    return this->p_engine;
}

std::shared_ptr<car::component::Brakes> car::BaseCar::getBrakes() {
    return this->p_brakes;
}

std::shared_ptr<car::component::Frame> car::BaseCar::getFrame() {
    return this->p_frame;
}

std::shared_ptr<car::component::Gears> car::BaseCar::getGears() {
    return this->p_gears;
}

std::shared_ptr<car::component::Suspension> car::BaseCar::getSuspensions() {
    return this->p_suspensions;
}

std::shared_ptr<car::component::Wheel> car::BaseCar::getWheels() {
    return this->p_wheels;
}

std::string car::BaseCar::getName() {
    return this->name;
}

void car::BaseCar::goByCurrentSpeed() {
    std::cout << "going " << this->currentspeed << "m/s" << std::endl;
}
