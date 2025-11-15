//
// Created by Kian Marvi on 11/14/25.
//

#ifndef MY_RAYLIB_GAME_SCORESYSTEM_H
#define MY_RAYLIB_GAME_SCORESYSTEM_H


class ScoreSystem
{
public:
    ScoreSystem();
    void AddPlayerScore();
    void AddOpponentScore();

    void Draw(int screenWidth) const;

    inline int GetPlayerScore() const { return playerScore; }
    inline int GetOpponentScore() const { return opponentScore; }
private:
    int playerScore;
    int opponentScore;
};


#endif //MY_RAYLIB_GAME_SCORESYSTEM_H