//
// Created by adria on 15.02.2024.
//

#include <limits>
#include "Functions.h"
#include "iostream"

int rollDie(int _dieType) {
    int result = std::rand() % _dieType + 1;
    return result;
}

void gameRound(int &_pointsPlayer, int &_pointsComputer, int &_dieType) {
    int playerRoll = rollDie(_dieType);
    int computerRoll = rollDie(_dieType);

    std::cout << "Your roll: " << playerRoll << std::endl;
    std::cout << "Computer roll: " << computerRoll << std::endl;

    if (playerRoll > computerRoll) {
        _pointsPlayer++;
        std::cout << "You win!" << std::endl;
        std::cout << "Your points: " << _pointsPlayer << std::endl;
        std::cout << "Computer points: " << _pointsComputer << std::endl;
    } else if (playerRoll < computerRoll) {
        _pointsComputer++;
        std::cout << "Computer wins!" << std::endl;
        std::cout << "Your points: " << _pointsPlayer << std::endl;
        std::cout << "Computer points: " << _pointsComputer << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }
}

void gameStartInfo() {
    std::cout << "Welcome to the dice game! :)" << std::endl;
    std::cout << "Before you roll a die against the computer, you need to enter the die type." << std::endl;
    std::cout << "This can either be a D4, D6, D8, D10, D12 or D20." << std::endl;
    std::cout << "Please only enter the number of the die (without the D)." << std::endl;
    std::cout << "Your points and the computer's points will be shown at the end." << std::endl;
    std::cout << "To exit the game, enter 0 as the die type." << std::endl;
    std::cout << "Enjoy! :)" << std::endl;
}

int changeDie() {
    int dieType;
    bool exit = false;

    while (!exit) {
        std::cout << "\nEnter die type or 0 to exit\n";

        if (!(std::cin >> dieType)) {
            std::cin.clear(); // clear bad input flag (clears error state)
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard remaining characters in input buffer, up to \n
            std::cout << "Invalid input. Please try again!\n";
            continue; // Restart the loop
        }

        if (dieType == 4 || dieType == 6 || dieType == 8 || dieType == 10 || dieType == 12 || dieType == 20) {
            return dieType;
        } else if (dieType == 0) {
            exit = true;
        }
        else {
            std::cout << "Invalid die type, please try again" << std::endl;
        }
    }
    return 0;
}

