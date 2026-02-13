//
// Created by Kian Marvi on 11/14/25.
//

#include "ScoreSystem.h"
#include "raylib.h"

ScoreSystem::ScoreSystem()
    : playerScore(0),
      opponentScore(0)
{
}

void ScoreSystem::AddPlayerScore()
{
    ++playerScore;
}

void ScoreSystem::AddOpponentScore()
{
    ++opponentScore;
}

void ScoreSystem::Draw(const int screenWidth) const
{
    DrawText(TextFormat("%i", playerScore), screenWidth / 4 - 20, 20, 80, WHITE);
    DrawText(TextFormat("%i", opponentScore), 3 * screenWidth / 4 - 20, 20, 80, WHITE);
}
