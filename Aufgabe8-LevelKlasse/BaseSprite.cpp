//
// Created by adria on 23.02.2024.
//

#include "BaseSprite.h"

Game::BaseSprite::BaseSprite(std::string _dateiname) {
    std::string dateipfad = "assets/graphics/" + _dateiname;
    // c_str() weil wir einen char* brauchen -> raylib ist eine C bibliothek! -> returns pointer to array of chars
    this->texture = LoadTexture(dateipfad.c_str());
}

Game::BaseSprite::~BaseSprite() {
    UnloadTexture(this->texture);
}
