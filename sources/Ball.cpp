//
// Created by Kian Marvi on 11/14/25.
//

#include "Ball.h"
#include "ScoreSystem.h"

Ball::Ball(const float x, const float y, const int radius, const int speedX, const int speedY)
: x(x),
  y(y),
  speedX(speedX),
  speedY(speedY),
  radius(radius)
{
}

void Ball::Bounce()
{
    speedX *= -1;
}

void Ball::Draw(Color color) const {
    DrawCircle(x, y, radius, color);
}

void Ball::Update(ScoreSystem &score)
{
    x += speedX;
    y += speedY;

    if (y + radius >= GetScreenHeight() || y - radius <= 0) {
        speedY *= -1;
    }

    // Opponent scores
    if (x - radius <= 0)
    {
        score.AddOpponentScore();
        ResetBall();
    }

    // Player scores
    if (x + radius >= GetScreenWidth())
    {
        score.AddPlayerScore();
        ResetBall();
    }
}

void Ball::ResetBall()
{
    x = GetScreenWidth() * 0.5f;
    y = GetScreenHeight() * 0.5f;

    int speed_choices[2] = {-1, 1};
    speedX *= speed_choices[GetRandomValue(0, 1)];
    speedY *= speed_choices[GetRandomValue(0, 1)];
}

Vector2 Ball::GetPosition() const
{
    return {x, y};
}

int Ball::GetRadius() const
{
    return radius;
}

float Ball::GetY() const {
    return y;
}