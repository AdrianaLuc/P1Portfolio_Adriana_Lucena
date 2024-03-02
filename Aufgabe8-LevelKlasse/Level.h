//
// Created by adria on 23.02.2024.
//

#pragma once

#include <memory>
#include "iostream"
#include "Sprite.h"
#include "vector"

namespace Game{
    class Level {
    public:
        // Vektor aus sprite Pointern
        std::vector<std::shared_ptr<Game::Sprite>> sprites;
        void drawSprites();
        void positionRandomly();
        void update(Vector2 _velocity);
    };
}





