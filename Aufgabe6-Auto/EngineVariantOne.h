//
// Created by adria on 23.02.2024.
//

#pragma once
#include "iostream"
#include "Engine.h"

namespace CarParts {

    class EngineVariantOne : public CarParts::Engine {
    public:
        EngineVariantOne() : CarParts::Engine(5){};
    };
}


