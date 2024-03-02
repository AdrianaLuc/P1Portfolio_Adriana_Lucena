//
// Created by adria on 02.03.2024.
//

#pragma once
#include "BaseSprite.h"
#include "utilities.h"

namespace Game {

    class Asteroid : public Game::BaseSprite {
    public:
        Asteroid(int _posX, int _posY, Texture2D _texture) : BaseSprite(_posX, _posY, _texture) {};
        Asteroid(std::string _dateiname) : BaseSprite(_dateiname) {};

        Vector2Int getVelocity();
        void setVelocity(Vector2Int _velocity);
        void modifyVelocity(float _modifierX, float _modifierY);

    private:
        Asteroid() = default;

        Vector2Int velocity = {0, 0};
    };
}

