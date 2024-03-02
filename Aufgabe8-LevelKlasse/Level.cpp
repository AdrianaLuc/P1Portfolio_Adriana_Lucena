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

void Game::Level::setRandomSpeed() {
    for (auto asteroid: asteroids) {
        asteroid->setSpeed(rand() % 5);
        if (asteroid->getSpeed() == 0) {
            asteroid->setSpeed(2);
        }
    }
}

void Game::Level::updateTest() {
    for (auto asteroid: asteroids) {
        asteroid->posX += asteroid->getDirection().x * asteroid->getSpeed();
        asteroid->posY += asteroid->getDirection().y * asteroid->getSpeed();

        if (asteroid->posX >= GetScreenWidth() - asteroid->texture.width) {
            asteroid->setDirection({-1, rand() % 3 - 1});
        }
        if (asteroid->posX <= 0) {
            asteroid->setDirection({1, rand() % 3 - 1});
        }
        if (asteroid->posY >= GetScreenHeight() - asteroid->texture.height) {
            asteroid->setDirection({rand() % 3 - 1, -1});
        }
        if (asteroid->posY <= 0) {
            asteroid->setDirection({rand() % 3 - 1, 1});
        }
    }
}

void Game::Level::setRandomDirection() {
    for (auto asteroid: asteroids) {
        // generates numbers between -1 and 1
        asteroid->setDirection({rand() % 3 - 1, rand() % 3 - 1});
        // disallow 0 direction
        if (asteroid->getDirection().x == 0 || asteroid->getDirection().y == 0) {
            asteroid->setDirection({1, 1});
        }
    }
}

