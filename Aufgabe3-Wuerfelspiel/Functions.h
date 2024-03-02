//
// Created by adria on 15.02.2024.
//

#pragma once

enum dieType {
    d4 = 4,
    d6 = 6,
    d8 = 8,
    d10 = 10,
    d12 = 12,
    d20 = 20
};

int rollDie(int _dieType);
void gameRound(int& _pointsPlayer, int& _pointsComputer, int& _dieType);
void gameStartInfo();
int changeDie();
int enumToInt(dieType _dieType);





