//
// Created by adria on 23.02.2024.
//

#pragma once

#include <memory>
#include "iostream"
#include "BaseSprite.h"
#include "vector"
#include "Asteroid.h"
#include "utilityClasses.h"
#include "utilitiyFunctions.h"

namespace Game{
    class Level {
    public:
        // Vektor aus sprite Pointern
        std::vector<std::shared_ptr<Game::Asteroid>> asteroids;
        void drawSprites();
        void positionRandomly();
        void setRandomSpeed();
        void updateTest();
        void setRandomDirection();
        void checkClickAsteroid();
    };
}





