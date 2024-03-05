//
// Created by adria on 23.02.2024.
//

#pragma once

#include "iostream"
#include "Engine.h"

namespace car::component {

    class EngineDuratecV1 : public component::Engine {
    public:
        EngineDuratecV1() : component::Engine("EngineDuratecV1", 7.5) {};
    };
}

