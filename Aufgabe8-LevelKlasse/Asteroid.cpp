//
// Created by adria on 02.03.2024.
//

#include "Asteroid.h"

Game::Vector2Int Game::Asteroid::getDirection() {
    return this->direction;
}

void Game::Asteroid::setDirection(Game::Vector2Int _direction) {
    this->direction = _direction;
}

int Game::Asteroid::getSpeed() {
    return this->speed;
}

void Game::Asteroid::setSpeed(int _speed) {
    this->speed = _speed;
}
