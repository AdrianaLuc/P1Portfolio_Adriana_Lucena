//
// Created by adria on 02.03.2024.
//

#include "Brakes.h"

std::string car::component::Brakes::getName() {
    return this->name;
}

int car::component::Brakes::getFriction() {
    return this->friction;
}
