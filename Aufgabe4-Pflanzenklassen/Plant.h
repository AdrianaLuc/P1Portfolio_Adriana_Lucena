//
// Created by adria on 15.02.2024.
//

#pragma once
#include "iostream"
#include "vector"

namespace plants {

    struct Root {
        Root() = default;
        Root(float _rootLength) : rootLength(_rootLength){};
        float rootLength;
    };

    struct Leaf {
        Leaf(std::string _leafColor) : leafColor(_leafColor){};
        std::string leafColor;
    };

    struct Seed {
        Seed(float _seedDiameter) : seedDiameter(_seedDiameter){};
        float seedDiameter;
    };

    class Plant {
    public:
        // getter
        std::string getLeafColor();
        float getSeedDiameter();
        std::string getName();

        // setter
        void setLeafColor(std::string _leafColor);
        void setSeedDiameter(float _seedDiameter);

        virtual float calculateAverageHeight(float timeInDays) = 0;
        //virtual float calculateRootLength();
    protected:
        Plant(std::string _name, std::string _leafColor, float _seedDiameter, float _growthRate) :name(_name), leafs(_leafColor), seeds(_seedDiameter), growthRate(_growthRate){};
        float averageHeight;
        std::string name;

        Root roots;
        // TODO (Idee): (vielleicht): Anzahl der Blätter steigt mit der Zeit (und der Höhe der Pflanze)?
        Leaf leafs;
        Seed seeds;
        float growthRate;
    };
}


