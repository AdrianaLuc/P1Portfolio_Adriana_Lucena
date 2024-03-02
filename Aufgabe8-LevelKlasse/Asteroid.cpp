//
// Created by adria on 02.03.2024.
//

#include "Asteroid.h"


Game::Vector2Int Game::Asteroid::getVelocity() {
    return this->velocity;
}

void Game::Asteroid::setVelocity(Vector2Int _velocity) {
    this->velocity = _velocity;
}

void Game::Asteroid::modifyVelocity(float _modifierX, float _modifierY) {
    this->velocity.x *= _modifierX;
    this->velocity.y *= _modifierY;
}

Game::Vector2Int Game::Asteroid::getDirection() {
    return this->direction;
}

void Game::Asteroid::setDirection(Game::Vector2Int _direction) {
    this->direction = _direction;
}
