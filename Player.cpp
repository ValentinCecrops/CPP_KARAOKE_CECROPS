#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Player.h"

/*
private:
    std::string _name;
    int _songScore[5];
    int _score;
public:
    void showAverageScore(int scores);
    void showTotalScore(int scores);
    void showHighScore(int scores);
    void showLowScore(int scores);
    void showScores(int scores);
    int addScore();
    Player(std::string name);
    Player();
*/

Player::Player(std::string name) : _name(name) {}

Player::Player() : _name("Défaut") {}

void Player::showAverageScore(int * scores)
{
    int averageScore = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        averageScore += scores[i];
    }
    averageScore /= 5;
    std::cout << "Score moyen : " << averageScore << std::endl;
}

void Player::showTotalScore(int * scores)
{
    int totalScore = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        totalScore += scores[i];
    }
    std::cout << "Score total : " << totalScore << std::endl;
}

void Player::showHighScore(int * scores)
{
    int highScore = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(scores[i] > highScore)
        {
            highScore = scores[i];
        }
    }
    if(highScore = 0)
    {
        std::cout << "Vous n'avez pas encore de score";
    }
    else
    {
        std::cout << "Meilleur score : " << highScore << std::endl;
    }
}

void Player::showLowScore(int * scores)
{
    int lowScore = 101;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(scores[i] < lowScore && scores[i] > 0)
        {
            lowScore = scores[i];
        }
    }
    if(lowScore = 101)
    {
        std::cout << "Vous n'avez pas encore de score";
    }
    else
    {
        std::cout << "Pire score : " << lowScore << std::endl;
    }
}

void Player::showScores(int * scores)
{
    for(int i = 0 ; i < 5 ; i++)
    {
        std::cout << "Chanson " << i << " : " << scores[i] << std::endl;
    }
}

int Player::addScore()
{
    srand(time(NULL));
    int randomScore = rand() % 51 + 50;
    return randomScore;
}