//
// Created by adria on 05.03.2024.
//

#include "Ford.h"

car::Ford::Ford() {
    this->p_engine = std::make_shared<car::component::EngineDragonV2>();
    this->p_brakes = std::make_shared<car::component::BrakesDragonV2>();
    this->p_frame = std::make_shared<car::component::FrameDragonV2>();
    this->p_gears = std::make_shared<car::component::GearsDragonV2>();
    this->p_suspensions = std::make_shared<car::component::SuspensionDragonV2>();
    this->p_wheels = std::make_shared<car::component::WheelDragonV2>();

    this->name = "Ford";
}

void car::Ford::accelerate(float _time) {
    if (this->p_engine->isEngineOn()) {
        std::cout << "Before " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;

        this->currentspeed += (this->p_engine->getAcceleration() * _time + (this->p_suspensions->getShockAbsorption() / 150 * _time)) * 3.6;

        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void car::Ford::deaccelerate(float _time) {
    if (this->p_engine->isEngineOn()) {
        std::cout << "Before " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;

        this->currentspeed -= (this->p_engine->getAcceleration() * _time + (this->p_suspensions->getShockAbsorption() / 150 * _time)) * 3.6;

        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void car::Ford::brake(float _time) {
    if (this->currentspeed > 0) {
        std::cout << "braking" <<std::endl;
        this->currentspeed -= this->p_brakes->getFriction() * _time * 1.2;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;
    } else {
        std::cout << "Cannot brake if already stopped!" <<std::endl;
    }
}
