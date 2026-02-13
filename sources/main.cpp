#include "raylib.h"

#include "Ball.h"
#include "Paddle.h"
#include "Opponent.h"
#include "ScoreSystem.h"

int main(void)
{
    constexpr int SCREEN_WIDTH = 1280;
    constexpr int SCREEN_HEIGHT = 720;
    const char* WINDOW_TITLE = "Intro to C++ GameDev Workshop :P";
    Color Green = Color{38, 185, 154, 255};
    Color Dark_Green = Color{20, 160, 133, 255};
    Color Light_Green = Color{129, 204, 184, 255};
    Color Yellow     = Color{243, 213, 91, 255};

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);

    // Initialise entities here

    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Update Entities Here

        // Render shapes
        ClearBackground(Dark_Green);
        DrawRectangle(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, Green);
        DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 150, Light_Green);
        DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, WHITE);

        // Render entities

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
