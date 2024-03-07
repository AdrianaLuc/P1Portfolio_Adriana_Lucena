//
// Created by adria on 23.02.2024.
//

#pragma once

#include "Engine.h"


namespace car::component {

    class EngineDragonV2 : public component::Engine {
    public:
        EngineDragonV2() : component::Engine("EngineDragonV2", 4.5f) {}
    };
}
