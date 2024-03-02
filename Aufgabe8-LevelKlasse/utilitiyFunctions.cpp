//
// Created by adria on 02.03.2024.
//

#include "utilitiyFunctions.h"

Vector2 normalizeVector(Vector2 _vector) {
    float magnitude = sqrtf(_vector.x * _vector.x + _vector.y * _vector.y);
    if (magnitude > 0) {
        _vector.x /= magnitude;
        _vector.y /= magnitude;
    }
    return _vector;
}

Game::Vector2Int normalizeVector(Game::Vector2Int _vector) {
    float magnitude = sqrtf(_vector.x * _vector.x + _vector.y * _vector.y);
    if (magnitude > 0) {
        _vector.x /= magnitude;
        _vector.y /= magnitude;
    }
    return _vector;
}