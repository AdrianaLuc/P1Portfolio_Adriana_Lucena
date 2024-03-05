//
// Created by adria on 02.03.2024.
//

#include "Suspension.h"

std::string car::component::Suspension::getName() {
    return this->name;
}

int car::component::Suspension::getShockAbsorption() {
    return this->shockAbsorption;
}
