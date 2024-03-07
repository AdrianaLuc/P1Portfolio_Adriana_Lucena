//
// Created by adria on 16.02.2024.
//

#pragma once
#include <memory>
#include "iostream"
#include "Plant.h"

void info();
void choosePlant(std::shared_ptr<plants::Plant>& _p_plant);
void getAverageHeight(std::shared_ptr<plants::Plant>& _p_plant);
