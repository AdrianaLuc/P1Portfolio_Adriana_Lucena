//
// Created by adria on 15.02.2024.
//

#include "Functions.h"
#include "iostream"

int rollDie(int _dieType){
    int result = std::rand() % _dieType + 1;
    return result;
}

void gameRound(int& _pointsPlayer, int& _pointsComputer, int& _dieType){
    int playerRoll = rollDie(_dieType);
    int computerRoll = rollDie(_dieType);
    std::cout << "Your roll: " << playerRoll << std::endl;
    std::cout << "Computer roll: " << computerRoll << std::endl;
    if (playerRoll > computerRoll){
        _pointsPlayer++;
        std::cout << "You win!" << std::endl;
        std::cout << "Your points: " << _pointsPlayer << std::endl;
        std::cout << "Computer points: " << _pointsComputer << std::endl;
    } else if (playerRoll < computerRoll){
        _pointsComputer++;
        std::cout << "Computer wins!" << std::endl;
        std::cout << "Your points: " << _pointsPlayer << std::endl;
        std::cout << "Computer points: " << _pointsComputer << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }
}

void gameStartInfo(){
    std::cout << "Welcome to the best dice game in the world! :)" << std::endl;
    std::cout << "Before you roll a die against the computer, you need to enter the die type" << std::endl;
    std::cout << "This can be either a D4, D6, D8, D10, D12 or D20" << std::endl;
    std::cout << "Your points and the computer's points will be shown at the end" << std::endl;
    std::cout << "To exit the game, enter 0 as the die type" << std::endl;
    std::cout << "Enjoy! :)" << std::endl;
}

int changeDie(){
    int dieType;
    std::cout << "Enter die type or 0 to exit" << std::endl;
    std::cin >> dieType;
    return dieType;
}

int enumToInt(dieType _dieType){
    switch (_dieType) {
        case d4:
            return 4;
        case d6:
            return 6;
        case d8:
            return 8;
        case d10:
            return 10;
        case d12:
            return 12;
        case d20:
            return 20;
        default:
            return 0;
    }
}
