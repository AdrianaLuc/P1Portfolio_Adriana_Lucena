//
// Created by adria on 20.02.2024.
//

#pragma once
#include "iostream"

namespace car::component {

    class Frame {
    public:
        Frame(std::string _name, std::string _color) : name(_name), color(_color){};

        std::string getName();
        std::string getColor();

    protected:
        std::string name;
        std::string color;
    };
}
