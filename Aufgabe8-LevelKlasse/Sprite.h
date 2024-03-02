//
// Created by adria on 23.02.2024.
//

#pragma once
#include "iostream"
#include "raylib.h"

namespace Game {

    class Sprite {
    public:
        Sprite(int _posX, int _posY, Texture2D _texture) : posX(_posX), posY(_posY), texture(_texture) {};

        Sprite(std::string _dateiname);

        ~Sprite();

        int posX;
        int posY;
        Texture2D texture;
    private:
        Sprite() = default;
    };
}

