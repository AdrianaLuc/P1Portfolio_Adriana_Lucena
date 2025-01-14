#include <cstdlib>
#include "raylib.h"
#include "config.h"
#include "iostream"
#include "raymath.h"
#include "BaseSprite.h"
#include "Level.h"

// TODO: alles in englische begriffe umschreiben
// TODO: rand funktion nochmal anschauen und verstehen was genau da passiert
// TODO: Vektoren auch nochmal anschauen
// TODO: verschiedene for Schleifen anschauen und ausprobieren

int main() {
    // Raylib initialization
    // Project name, screen size, fullscreen mode etc. can be specified in the config.h.in file
    InitWindow(Game::ScreenWidth, Game::ScreenHeight, Game::PROJECT_NAME);
    SetTargetFPS(60);

#ifdef GAME_START_FULLSCREEN
    ToggleFullscreen();
#endif

    // Your own initialization code here
    srand (time(nullptr));
    Game::Level levelOne;
    for (int i = 0; i < 20; ++i) {
        // TODO: make_shared und alle anderen Methoden nochmal anschauen
        levelOne.cookies.push_back(std::make_shared<Game::Cookie>("cookieNew.png"));
    }


    levelOne.positionRandomly();
    levelOne.setRandomDirection();
    levelOne.setRandomSpeed();
    levelOne.preloadCookieCrumbs();


    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Updates that are made by frame are coded here
        //levelOne.update();
        levelOne.updateTest();
        levelOne.checkClickAsteroid();
        levelOne.cookieCollision();


        BeginDrawing();
        // You can draw on the screen between BeginDrawing() and EndDrawing()
        ClearBackground(WHITE);
        levelOne.drawSprites();
        /*for (auto cookie: levelOne.cookies) {
            cookie->drawHitbox();
        }*/


        EndDrawing();
    } // Main game loop end

    // De-initialization here
    // ...


    // Close window and OpenGL context
    CloseWindow();

    return EXIT_SUCCESS;
}
