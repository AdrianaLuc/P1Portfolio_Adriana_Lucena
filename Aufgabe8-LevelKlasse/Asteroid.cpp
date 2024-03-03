//
// Created by adria on 02.03.2024.
//

#include "Asteroid.h"

Game::Asteroid::Asteroid(std::string _dateiname) : BaseSprite(_dateiname) {
    // braucht man nicht unbedingt, da die pos in update hitbox schon gesetzt wird.
    init();
}

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

Game::Circle Game::Asteroid::getHitbox() {
    return this->hitbox;
}

void Game::Asteroid::setHitbox(Game::Circle _hitbox) {
    this->hitbox = _hitbox;
}

void Game::Asteroid::setHitbox(int _centerX, int _centerY, int _radius) {
    this->hitbox = { _centerX, _centerY, _radius };
}

void Game::Asteroid::drawHitbox() {
    DrawCircle(this->hitbox.centerX, this->hitbox.centerY, this->hitbox.radius, RED);
}

void Game::Asteroid::init() {
    this->hitbox = { this->posX + this->texture.width / 2, this->posY + this->texture.height / 2, this->texture.width / 2 };
}

void Game::Asteroid::updateHitboxPosition() {
    this->hitbox = { this->posX + this->texture.width / 2, this->posY + this->texture.height / 2, this->texture.width / 2 };
}



