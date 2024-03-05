//
// Created by adria on 20.02.2024.
//

// TODO: Klassen in Ordenern ordnen (CMake!)
// TODO: raylib implementation
// TODO: wie funktionieren Autos????

#include "iostream"
#include "Ford.h"

int main() {

    Ford ford;
    ford.accelerate(5);
    ford.deaccelerate(10);
    ford.brake();
    ford.goLeft();
    ford.goRight();

    return 0;
}