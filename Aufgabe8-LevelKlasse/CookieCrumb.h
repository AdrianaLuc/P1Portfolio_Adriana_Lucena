//
// Created by adria on 03.03.2024.
//

#pragma once
#include "BaseSprite.h"
#include "raylib.h"

namespace Game {
    class CookieCrumb : Game::BaseSprite {
    public:
        CookieCrumb(std::string _dateiname, int _posX, int _posY) : BaseSprite(_dateiname) {
            this->posX = _posX;
            this->posY = _posY;
        };

        void draw(int _posX, int _posY);

    private:
        CookieCrumb() = default;
    };
}




