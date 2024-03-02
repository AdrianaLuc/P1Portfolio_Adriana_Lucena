//
// Created by adria on 02.03.2024.
//

#pragma once
#include "BaseSprite.h"
#include "utilityClasses.h"

namespace Game {

    class Asteroid : public Game::BaseSprite {
    public:
        Asteroid(int _posX, int _posY, Texture2D _texture) : BaseSprite(_posX, _posY, _texture) {};
        Asteroid(std::string _dateiname) : BaseSprite(_dateiname) {};

        Vector2Int getDirection();
        int getSpeed();
        void setDirection(Vector2Int _direction);
        void setSpeed(int _speed);

    private:
        Asteroid() = default;

        // rand Funktion arbeitet nur mit ints.
        int speed = 0;
        Vector2Int direction = {0, 0};
    };
}

