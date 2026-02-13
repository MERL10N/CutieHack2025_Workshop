//
// Created by Kian Marvi on 11/14/25.
//

#include "Opponent.h"

void OpponentPaddle::Update(const int ballY)
{
    if (GetCenterY() > ballY)
    {
        MoveUp();
    }
    else if (GetCenterY() < ballY)
    {
        MoveDown();
    }
}