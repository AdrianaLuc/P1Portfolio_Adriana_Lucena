//
// Created by adria on 03.03.2024.
//

#pragma once
#include "raylib.h"
#include "iostream"

namespace Game {
    class CookieCrumb {
    public:
        CookieCrumb() = default;

        Texture2D texture;
        int posX;
        int posY;

        void draw(int _posX, int _posY);
        void loadTexture(std::string _dateiname);
        //static CookieCrumb& getInstance();

    private:

    };
}




