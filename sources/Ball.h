//
// Created by Kian Marvi on 11/14/25.
//

#ifndef MY_RAYLIB_GAME_BALL_H
#define MY_RAYLIB_GAME_BALL_H
#include "raylib.h"
constexpr int SCREEN_WIDTH = 1280;
constexpr int SCREEN_HEIGHT = 720;

class ScoreSystem;

class Ball
{
public:
    Ball(const float x, const float y, const int radius, const int speedX, const int speedY);

    void Bounce();

    void Draw(Color color) const;
    void Update(ScoreSystem &score);
    void ResetBall();

    // Read-only access
    Vector2 GetPosition() const;
    int GetRadius() const;
    float GetY() const;

private:
    float x;
    float y;
    int speedX;
    int speedY;
    int radius;
};
#endif //MY_RAYLIB_GAME_BALL_H