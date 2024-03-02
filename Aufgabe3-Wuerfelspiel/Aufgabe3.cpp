//
// Created by adria on 15.02.2024.
//

#include "iostream"
#include "Functions.h"

// TODO: add comments; fix enum type or remove it again; implement cin good stuff; Benutzeroberfläche Erweiterung (raylib?)
// TODO: fix seed for rand()?

int main(){
    // set seed for rand()
    srand (time(nullptr));
    int pointsPlayer = 0;
    int pointsComputer = 0;
    int dieType = 0;
    bool exitCondition = false;

    gameStartInfo();

    // Game Loop
    while (!exitCondition){
        dieType = changeDie();
        if (dieType == 0){
            exitCondition = true;
        } else {
            gameRound(pointsPlayer, pointsComputer, dieType);
        }
    }

    return 0;
}