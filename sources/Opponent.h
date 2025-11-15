//
// Created by Kian Marvi on 11/14/25.
//

#ifndef MY_RAYLIB_GAME_OPPONENT_H
#define MY_RAYLIB_GAME_OPPONENT_H

#include "Paddle.h"

class OpponentPaddle : public Paddle
{
public:
    using Paddle::Paddle;   // inherit Paddle constructor

    void Update(int ballY);
};


#endif //MY_RAYLIB_GAME_OPPONENT_H