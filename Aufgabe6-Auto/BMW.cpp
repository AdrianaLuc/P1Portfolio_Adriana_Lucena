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
        std::cout << "current speed: " << this->currentspeed << "m/s" <<std::endl;
        this->currentspeed += this->p_engine->getAcceleration() * _time + this->p_wheels->getPowerTransmission() * _time;
        std::cout << "After " << _time << " seconds" <<std::endl;
        std::cout << "current speed: " << this->currentspeed << "m/s" <<std::endl;
    } else {
        std::cout << "Engine is off!" <<std::endl;
    }
}

void car::BMW::deaccelerate(float _time) {
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

void car::BMW::brake() {
    std::cout << "braking" <<std::endl;
}
