//
// Created by adria on 05.03.2024.
//

#include "Ford.h"

Ford::Ford() {
    this->p_engine = std::make_shared<car::component::EngineDragonV2>();
    this->p_brakes = std::make_shared<car::component::BrakesDragonV2>();
    this->p_frame = std::make_shared<car::component::FrameDragonV2>();
    this->p_gears = std::make_shared<car::component::GearsDragonV2>();
    this->p_suspensions = std::make_shared<car::component::SuspensionDragonV2>();
    this->p_wheels = std::make_shared<car::component::WheelDragonV2>();
}

void Ford::accelerate(int _time) {
    if (this->p_engine->isEngineOn()) {
        std::cout << "Before " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "m/s" <<std::endl;
        this->currentspeed += this->p_engine->getAcceleration() * _time + this->p_wheels->getPowerTransmission() * _time;
        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "m/s" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void Ford::deaccelerate(int _time) {
    if (this->p_engine->isEngineOn()) {
        std::cout << "Before " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "m/s" <<std::endl;
        this->currentspeed -= this->p_engine->getAcceleration() * _time + this->p_wheels->getPowerTransmission() * _time;
        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "m/s" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void Ford::brake() {
 std::cout << "braking" <<std::endl;
}
