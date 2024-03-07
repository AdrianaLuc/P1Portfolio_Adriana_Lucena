//
// Created by adria on 06.03.2024.
//

#include "BMW.h"

car::BMW::BMW() {
    this->p_engine = std::make_shared<car::component::EngineDuratecV1>();
    this->p_brakes = std::make_shared<car::component::BrakesDuratecV1>();
    this->p_frame = std::make_shared<car::component::FrameDuratecV1>();
    this->p_gears = std::make_shared<car::component::GearsDuratecV1>();
    this->p_suspensions = std::make_shared<car::component::SuspensionDuratecV1>();
    this->p_wheels = std::make_shared<car::component::WheelDuratecV1>();

    this->name = "BMW";
}

void car::BMW::accelerate(float _time) {
    if (this->p_engine->isEngineOn()) {
        std::cout << "Before " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;

        this->currentspeed += (this->p_engine->getAcceleration() * _time + (this->p_wheels->getPowerTransmission() * _time) / 5) * 3.6;

        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void car::BMW::deaccelerate(float _time) {
    if (this->p_engine->isEngineOn()) {
        std::cout << "Before " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;

        this->currentspeed -= (this->p_engine->getAcceleration() * _time + (this->p_wheels->getPowerTransmission() * _time) / 2) * 3.6;

        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void car::BMW::brake(float _time) {
    std::cout << "braking" <<std::endl;
    this->currentspeed -= this->p_brakes->getFriction() * _time;
    std::cout << "current speed: " << this->currentspeed << "km/h" <<std::endl;
}
