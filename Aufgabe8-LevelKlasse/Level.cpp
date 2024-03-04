//
// Created by adria on 23.02.2024.
//

#include "Level.h"

void Game::Level::drawSprites() {
    // "for every asteroid in the vector cookies"
    for (auto cookie: cookies) {
        DrawTexture(cookie->texture, cookie->posX, cookie->posY, WHITE);
    }
    for (auto cookie: cookies) {
        for (auto crumb: cookie->cookieCrumbs) {
            crumb->draw(cookie->posX, cookie->posY);
        }
    }
}

void Game::Level::positionRandomly() {
    for (auto cookie: cookies) {
        cookie->posX = rand() % (GetScreenWidth() - cookie->texture.width);
        cookie->posY = rand() % (GetScreenHeight() - cookie->texture.width);
    }
}

void Game::Level::setRandomSpeed() {
    for (auto cookie: cookies) {
        cookie->setSpeed(rand() % 5);
        if (cookie->getSpeed() == 0) {
            cookie->setSpeed(2);
        }
    }
}

void Game::Level::updateTest() {
    for (auto cookie: cookies) {
        cookie->posX += cookie->getDirection().x * cookie->getSpeed();
        cookie->posY += cookie->getDirection().y * cookie->getSpeed();

        if (cookie->posX >= GetScreenWidth() - cookie->texture.width) {
            cookie->setDirection({-1, rand() % 3 - 1});
        }
        if (cookie->posX <= 0) {
            cookie->setDirection({1, rand() % 3 - 1});
        }
        if (cookie->posY >= GetScreenHeight() - cookie->texture.height) {
            cookie->setDirection({rand() % 3 - 1, -1});
        }
        if (cookie->posY <= 0) {
            cookie->setDirection({rand() % 3 - 1, 1});
        }

        cookie->updateHitboxPosition();
    }
}

void Game::Level::setRandomDirection() {
    for (auto cookie: cookies) {
        // generates numbers between -1 and 1
        cookie->setDirection({rand() % 3 - 1, rand() % 3 - 1});

        // TODO: warum funktioniert das nicht? :(
        //normalizeVector(cookie->getDirection());

        // disallow 0 direction
        if (cookie->getDirection().x == 0 || cookie->getDirection().y == 0) {
            cookie->setDirection({1, 1});
        }
    }
}

void Game::Level::checkClickAsteroid() {
    Vector2 mousePoint = GetMousePosition();
    // float conversion stuff
    float hitboxCenterX;
    float hitboxCenterY;
    for (auto cookie: cookies) {
        hitboxCenterX = cookie->getHitbox().centerX;
        hitboxCenterY = cookie->getHitbox().centerY;
        if (CheckCollisionPointCircle(mousePoint, {hitboxCenterX, hitboxCenterY}, cookie->getHitbox().radius)){
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                cookie->posX = 0;
                cookie->posY = 0;
                cookie->spawnCookieCrumbs();
            }
        }
    }
}



