//
// Created by Kian Marvi on 11/14/25.
//

#include "Ball.h"
#include "ScoreSystem.h"

Ball::Ball(float x, float y, int radius, int speedX, int speedY)
: x(x),
  y(y),
  speedX(speedX),
  speedY(speedY),
  radius(radius)
{
}

void Ball::Bounce()
{
}

void Ball::Draw(Color color) const
{
}

void Ball::Update(ScoreSystem &score)
{
}

void Ball::ResetBall()
{
}

Vector2 Ball::GetPosition() const
{
    return {x, y};
}

int Ball::GetRadius() const
{
    return radius;
}

float Ball::GetY() const
{
    return y;
}