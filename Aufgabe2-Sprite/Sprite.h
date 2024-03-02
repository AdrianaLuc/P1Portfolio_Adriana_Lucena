//
// Created by adria on 15.02.2024.
//

#pragma once

namespace Sprites {
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
        // lieber ein Vector?
        Frame frames[10];
        Frame* currentFramePointer = &frames[0];
        // anonymous enum
        enum typ{
            animate,
            character,
            object,
            character_animation
        };
    };
}









