//
// Created by adria on 15.02.2024.
//

#pragma once
#include "iostream"

namespace Plants {

    class Plant {
    public:
        // getter
        std::string getLeafColor();
        float getSeedDiameter();

        // setter
        void setLeafColor(std::string leafColor);
        void setSeedDiameter(float seedDiameter);

        virtual float calculateAverageHeight(float timeInDays) = 0;
        //virtual float calculateRootLength();
    protected:
        Plant(std::string _leafColor, float _seedDiameter, float _growthRate) : leafColor(_leafColor), seedDiameter(_seedDiameter), growthRate(_growthRate){};
        float averageHeight;
        // Blätter, Wurzeln, Samen als eigene Klasse -> dann in Vektoren klatschen
        // -> Vector<Blatt> Blätter, ...
        float rootLength;
        std::string leafColor;
        float seedDiameter;
        float growthRate;
    };
}


