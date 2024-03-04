//
// Created by adria on 02.03.2024.
//

#pragma once

#include <memory>
#include "BaseSprite.h"
#include "utilityClasses.h"
#include "raylib.h"
#include "CookieCrumb.h"
#include "vector"

namespace Game {

    class Cookie : public Game::BaseSprite {
    public:
        Cookie(int _posX, int _posY, Texture2D _texture) : BaseSprite(_posX, _posY, _texture) {};
        Cookie(std::string _dateiname);

        Vector2Int getDirection();
        int getSpeed();
        Circle getHitbox();
        void setDirection(Vector2Int _direction);
        void setSpeed(int _speed);
        // überladen aus convenience Gründen.
        void setHitbox(Circle _hitbox);
        void setHitbox(int _centerX, int _centerY, int _radius);
        void drawHitbox();
        void init();
        void updateHitboxPosition();
        void spawnCookieCrumbs();
        std::vector<std::shared_ptr<Game::CookieCrumb>> cookieCrumbs;

    private:
        Cookie() = default;

        int crumbCounter = 0;

        // rand Funktion arbeitet nur mit ints.
        int speed = 0;
        Vector2Int direction = {0, 0};
        Circle hitbox = {0, 0, 0};
    };
}

