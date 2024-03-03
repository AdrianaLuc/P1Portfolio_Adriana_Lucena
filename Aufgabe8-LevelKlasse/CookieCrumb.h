//
// Created by adria on 03.03.2024.
//

#pragma once
#include "BaseSprite.h"
#include "raylib.h"

namespace Game {
    class CookieCrumb : Game::BaseSprite {
    public:
        CookieCrumb(std::string _dateiname) : BaseSprite(_dateiname) {};

    private:
        CookieCrumb() = default;
    };
}




