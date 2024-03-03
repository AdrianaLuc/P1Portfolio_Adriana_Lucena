//
// Created by adria on 23.02.2024.
//

#pragma once
#include "iostream"
#include "raylib.h"

namespace Game {

    class BaseSprite {
    public:
        BaseSprite(int _posX, int _posY, Texture2D _texture) : posX(_posX), posY(_posY), texture(_texture){};

        BaseSprite(std::string _dateiname);

        ~BaseSprite();

        int posX;
        int posY;
        Texture2D texture;
    private:
        BaseSprite() = default;
    };
}

