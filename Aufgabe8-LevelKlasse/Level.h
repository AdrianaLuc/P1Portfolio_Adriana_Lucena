//
// Created by adria on 23.02.2024.
//

#pragma once

#include <memory>
#include "iostream"
#include "BaseSprite.h"
#include "vector"
#include "Cookie.h"
#include "utilityClasses.h"
#include "utilitiyFunctions.h"
#include "CookieCrumb.h"

namespace Game{
    class Level {
    public:
        // Vektor aus sprite Pointern
        std::vector<std::shared_ptr<Game::Cookie>> cookies;
        std::vector<std::shared_ptr<Game::CookieCrumb>> cookieCrumbs;
        void drawSprites();
        void positionRandomly();
        void setRandomSpeed();
        void updateTest();
        void setRandomDirection();
        void checkClickAsteroid();
    };
}





