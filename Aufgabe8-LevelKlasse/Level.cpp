//
// Created by adria on 23.02.2024.
//

#include "Level.h"

void Game::Level::drawSprites() {
    // "for every sprite in the vector sprites"
    for (auto sprite: sprites) {
        DrawTexture(sprite->texture, sprite->posX, sprite->posY, WHITE);
    }
}

// TODO: fix this
void Game::Level::positionRandomly() {
    for (auto sprite: sprites) {
        sprite->posX = rand() % (GetScreenWidth() - sprite->texture.width);
        sprite->posY = rand() % (GetScreenHeight() - sprite->texture.width);
    }
}

void Game::Level::update(Vector2 _velocity) {
    for (auto sprite: sprites) {
        sprite->posX += _velocity.x;
        sprite->posY += _velocity.y;
        /*if (sprite->posX == GetScreenWidth() - sprite->texture.width || sprite->posX == 0 + sprite->texture.width) {
            _velocity.x *= -1;
        }
        if (sprite->posY == GetScreenHeight() - sprite->texture.height || sprite->posY == 0 + sprite->texture.height) {
            _velocity.y *= -1;
        }*/
    }










    /*Vector2 newPoint;
   Vector2 direction;
   newPoint.x = rand() % 200;
   newPoint.y = rand() % 500;
   for (auto sprite : sprites){
       direction.x = newPoint.x - sprite->posX;
       direction.y = newPoint.y - sprite->posY;
       sprite->posX += direction.x;
       sprite->posY += direction.y;
   }*/
    /*for (auto sprite : sprites){
        if (sprite->posX == GetScreenWidth() - sprite->texture.width || sprite->posX == 0 + sprite->texture.width){
            direction.x *= -1;
            direction.y *= -1;
        }
    }*/
}
