//
// Created by adria on 02.03.2024.
//

#include "Cookie.h"

Game::Cookie::Cookie(std::string _dateiname) : BaseSprite(_dateiname) {
    // braucht man nicht unbedingt, da die pos in update hitbox schon gesetzt wird.
    init();
}

Game::Vector2Int Game::Cookie::getDirection() {
    return this->direction;
}

void Game::Cookie::setDirection(Game::Vector2Int _direction) {
    this->direction = _direction;
}

int Game::Cookie::getSpeed() {
    return this->speed;
}

void Game::Cookie::setSpeed(int _speed) {
    this->speed = _speed;
}

Game::Circle Game::Cookie::getHitbox() {
    return this->hitbox;
}

void Game::Cookie::setHitbox(Game::Circle _hitbox) {
    this->hitbox = _hitbox;
}

void Game::Cookie::setHitbox(int _centerX, int _centerY, int _radius) {
    this->hitbox = { _centerX, _centerY, _radius };
}

void Game::Cookie::drawHitbox() {
    DrawCircle(this->hitbox.centerX, this->hitbox.centerY, this->hitbox.radius, RED);
}

void Game::Cookie::init() {
    this->hitbox = { this->posX + this->texture.width / 2, this->posY + this->texture.height / 2, this->texture.width / 2 };
}

void Game::Cookie::updateHitboxPosition() {
    this->hitbox = { this->posX + this->texture.width / 2, this->posY + this->texture.height / 2, this->texture.width / 2 };
}

void Game::Cookie::spawnCookieCrumbs() {
    for (int i = 0; i < 5; ++i) {
        cookieCrumbs.push_back(std::make_shared<Game::CookieCrumb>("cookieNew.png", this->posX, this->posY));
    }
}



