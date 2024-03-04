//
// Created by adria on 15.02.2024.
//

#pragma once
#include "iostream"
#include "vector"

namespace Plants {

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

        // setter
        void setLeafColor(std::string _leafColor);
        void setSeedDiameter(float _seedDiameter);

        virtual float calculateAverageHeight(float timeInDays) = 0;
        //virtual float calculateRootLength();
    protected:
        Plant(std::string _leafColor, float _seedDiameter, float _growthRate) : leafs(_leafColor), seeds(_seedDiameter), growthRate(_growthRate){};
        float averageHeight;
        // Blätter, Wurzeln, Seed als eigene Klasse -> dann in Vektoren klatschen
        // -> Vector<Leaf> Blätter, ...
        Root roots;
        // TODO (vielleicht): Anzahl der Blätter steigt mit der Zeit (und der Höhe der Pflanze)?
        Leaf leafs;
        Seed seeds;
        float growthRate;
    };

}


