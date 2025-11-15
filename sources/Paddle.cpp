//
// Created by Kian Marvi on 11/14/25.
//

#include "Paddle.h"
#include <raylib.h>

Paddle::Paddle(float x, float y, float width, float height, int speed)
: x(x),
  y(y),
  width(width),
  height(height),
  speed(speed)
{
}

void Paddle::Draw() const
{
}

void Paddle::Update()
{
    // Get Player Input
}

void Paddle::MoveUp()
{
    // Move player up
}

void Paddle::MoveDown()
{
    // Move Player Down
}

void Paddle::LimitMovement()
{
}

Rectangle Paddle::GetRect() const
{
    return Rectangle{x, y, width, height};
}

float Paddle::GetCenterY() const
{
    return y + height / 2.0f;
}