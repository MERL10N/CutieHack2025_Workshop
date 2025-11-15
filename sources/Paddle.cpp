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
    DrawRectangleRounded(Rectangle{x, y, width, height}, 0.8f, 0, WHITE);
}

void Paddle::Update()
{
    if (IsKeyDown(KEY_UP))
    {
        MoveUp();
    }
    if (IsKeyDown(KEY_DOWN))
    {
        MoveDown();
    }
}

void Paddle::MoveUp()
{
    y -= speed;
    LimitMovement();
}

void Paddle::MoveDown()
{
    y += speed;
    LimitMovement();
}

void Paddle::LimitMovement()
{
    if (y <= 0)
    {
        y = 0;
    }
    if (y + height >= GetScreenHeight()) {
        y = GetScreenHeight() - height;
    }
}

Rectangle Paddle::GetRect() const
{
    return Rectangle{x, y, width, height};
}

float Paddle::GetCenterY() const
{
    return y + height / 2.0f;
}