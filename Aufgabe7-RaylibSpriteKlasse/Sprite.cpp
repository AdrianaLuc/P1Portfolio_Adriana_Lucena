//
// Created by adria on 23.02.2024.
//

#include "Sprite.h"

Game::Sprite::Sprite(std::string _dateiname) {
    std::string dateipfad = "assets/graphics/" + _dateiname;
    // c_str() weil wir einen char* brauchen -> raylib ist eine C bibliothek! -> returns pointer to array of chars
    this->texture = LoadTexture(dateipfad.c_str());
}

Game::Sprite::~Sprite() {
    UnloadTexture(this->texture);
}
