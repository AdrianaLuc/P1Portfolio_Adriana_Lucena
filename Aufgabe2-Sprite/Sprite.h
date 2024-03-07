//
// Created by adria on 15.02.2024.
//

#pragma once

namespace sprites {
    struct Koordinaten {
        float x;
        float y;
        float z;
    };

    struct Frame {

    };

    struct Sprite {
        Koordinaten position;
        bool drawable = true;
        int animationFrames;
        int currentFrame = 0;
        int width;
        int height;
        Frame frames[10];
        Frame* currentFramePointer = &frames[0];
        // anonymous enum -> brauche ich gerade nur hier (lokal)
        enum typ{
            animate,
            character,
            object,
            character_animation
        };
    };
}









