#include "raylib.h"

#include "Ball.h"
#include "Paddle.h"
#include "Opponent.h"
#include "ScoreSystem.h"

int main(void)
{
    constexpr int SCREEN_WIDTH = 1280;
    constexpr int SCREEN_HEIGHT = 720;
    const char* WINDOW_TITLE = "Intro to C++ for Game Dev :P";
    Color Green = Color{38, 185, 154, 255};
    Color Dark_Green = Color{20, 160, 133, 255};
    Color Light_Green = Color{129, 204, 184, 255};
    Color Yellow     = Color{243, 213, 91, 255};


    Ball ball(SCREEN_WIDTH * 0.5f, SCREEN_HEIGHT * 0.5f, 20, 7, 7);

    Paddle player(SCREEN_WIDTH - 25.0f - 10.0f,SCREEN_HEIGHT / 2.0f - 120.0f / 2.0f,25.0f,120.0f,6);
    OpponentPaddle opponent(10.0f, SCREEN_HEIGHT / 2.0f - 120.0f / 2.0f,25.0f,  120.0f,  6);

    ScoreSystem score;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);


    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Update
        ball.Update(score);
        player.Update();
        opponent.Update(static_cast<int>(ball.GetY()));

        // Checking for collisions
        if (CheckCollisionCircleRec(ball.GetPosition(), ball.GetRadius(),player.GetRect()))
        {
            ball.Bounce();
        }

        if (CheckCollisionCircleRec(ball.GetPosition(), ball.GetRadius(),opponent.GetRect()))
        {
            ball.Bounce();
        }

        ClearBackground(SKYBLUE);

        // Render shapes
        ClearBackground(Dark_Green);
        DrawRectangle(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, Green);
        DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 150, Light_Green);
        DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, WHITE);

        // Render entities
        ball.Draw(Yellow);
        player.Draw();
        opponent.Draw();
        score.Draw(SCREEN_WIDTH);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}