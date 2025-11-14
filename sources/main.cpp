#include "raylib.h"

int main(void)
{
    constexpr int SCREEN_WIDTH = 1280;
    constexpr int SCREEN_HEIGHT = 720;
    const char* WINDOW_TITLE = "Cutiehack 2025 :D";
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);


    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(SKYBLUE);

        // Render shapes
        DrawLine(SCREEN_WIDTH * 0.5f, 0, SCREEN_HEIGHT, WHITE);
        DrawCircle(SCREEN_WIDTH * 0.5f, SCREEN_HEIGHT * 0.5f, 20, WHITE);
        DrawRectangle(10, SCREEN_HEIGHT * 0.5f - 60, 25, 150, WHITE);
        DrawRectangle(SCREEN_WIDTH - 35, SCREEN_HEIGHT * 0.5f - 60, 25, 150, WHITE);



        EndDrawing();
    }

    CloseWindow();

    return 0;
}
