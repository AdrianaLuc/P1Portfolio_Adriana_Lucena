//
// Created by adria on 23.02.2024.
//

#include "Level.h"

void Game::Level::drawSprites() {
    // "for every asteroid in the vector asteroids"
    for (auto asteroid: asteroids) {
        DrawTexture(asteroid->texture, asteroid->posX, asteroid->posY, WHITE);
    }
}

void Game::Level::positionRandomly() {
    for (auto asteroid: asteroids) {
        asteroid->posX = rand() % (GetScreenWidth() - asteroid->texture.width);
        asteroid->posY = rand() % (GetScreenHeight() - asteroid->texture.width);
    }
}

void Game::Level::setRandomVelocity() {
    // TODO: disallow 0 velocity
    for (auto asteroid: asteroids) {
        asteroid->setVelocity({rand() % 7, rand() % 7});
        if (asteroid->getVelocity().x == 0 || asteroid->getVelocity().y == 0) {
            asteroid->setVelocity({1, 1});
        }
    }
}

void Game::Level::update() {
    for (auto asteroid: asteroids) {
        asteroid->posX += asteroid->getVelocity().x;
        asteroid->posY += asteroid->getVelocity().y;

        if (asteroid->posX >= GetScreenWidth() || asteroid->posX <= 0) {
            asteroid->modifyVelocity(-1, 0);
        }
        if (asteroid->posY >= GetScreenHeight() || asteroid->posY <= 0) {
            asteroid->modifyVelocity(0, -1);
        }
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


