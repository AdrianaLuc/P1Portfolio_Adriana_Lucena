//
// Created by adria on 20.02.2024.
//

#pragma once

namespace CarParts {

    class Engine {
    public:
        Engine(int _acceleration) : acceleration(_acceleration){};
        int getAcceleration();
    private:
        // keine Ahnung wie Autos funktionieren????
        int acceleration;
    };
}
