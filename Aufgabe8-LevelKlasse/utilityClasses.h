//
// Created by adria on 02.03.2024.
//

#pragma once

#include "raylib.h"
#include "cmath"

namespace Game {
    class Vector2Int {
    public:
        int x;
        int y;
    };

    class Circle {
    public:
        Circle() = default;
        Circle(int _centerX, int _centerY, int _radius) : centerX(_centerX), centerY(_centerY), radius(_radius){};
        float centerX;
        float centerY;
        int radius;
    };
}

