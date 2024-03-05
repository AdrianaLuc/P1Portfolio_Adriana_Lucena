//
// Created by adria on 02.03.2024.
//

#include "Gears.h"

car::component::gearShift car::component::Gears::getCurrentGear() {
    return this->currentGear;
}

void car::component::Gears::setGear(car::component::gearShift _gear) {
    this->currentGear = _gear;
}
