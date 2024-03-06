//
// Created by adria on 03.03.2024.
//

#include "CookieCrumb.h"

void Game::CookieCrumb::draw(int _posX, int _posY) {
    DrawTexture(this->texture, _posX, _posY, WHITE);
}

void Game::CookieCrumb::loadTexture(std::string _dateiname) {
    std::string dateipfad = "assets/graphics/" + _dateiname;
    // c_str() weil wir einen char* brauchen -> raylib ist eine C bibliothek! -> returns pointer to array of chars
    this->texture = LoadTexture(dateipfad.c_str());
}
