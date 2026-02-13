//
// Created by Kian Marvi on 11/14/25.
//

#ifndef MY_RAYLIB_GAME_PADDLE_H
#define MY_RAYLIB_GAME_PADDLE_H


#include <raylib.h>

class Paddle
{
public:
    Paddle(const float x, const float y, const float width, const float height, const int speed);

    void Draw() const;
    virtual void Update();

    Rectangle GetRect() const;
    float GetCenterY() const;

protected:
    void LimitMovement();
    void MoveUp();
    void MoveDown();

private:
    float x;
    float y;
    float width;
    float height;
    int speed;
};
#endif //MY_RAYLIB_GAME_PADDLE_H