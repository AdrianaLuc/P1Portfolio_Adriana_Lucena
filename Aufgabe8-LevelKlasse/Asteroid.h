//
// Created by adria on 02.03.2024.
//

#pragma once
#include "BaseSprite.h"
#include "utilityClasses.h"
#include "raylib.h"

namespace Game {

    class Asteroid : public Game::BaseSprite {
    public:
        Asteroid(int _posX, int _posY, Texture2D _texture) : BaseSprite(_posX, _posY, _texture) {};
        Asteroid(std::string _dateiname);

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

    private:
        Asteroid() = default;

        // rand Funktion arbeitet nur mit ints.
        int speed = 0;
        Vector2Int direction = {0, 0};
        Circle hitbox = {0, 0, 0};
    };
}

