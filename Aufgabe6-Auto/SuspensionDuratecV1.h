//
// Created by adria on 05.03.2024.
//

#pragma once
#include "Suspension.h"

namespace car::component {

    class SuspensionDuratecV1 : public car::component::Suspension {
    public:
        SuspensionDuratecV1() : car::component::Suspension("Suspension DuratecV1", 100.0f) {}
    };
}

