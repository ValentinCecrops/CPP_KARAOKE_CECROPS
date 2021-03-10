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

void Player::showAverageScore()
{
    int averageScore = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        averageScore += _songScore[i];
    }
    averageScore /= 5;
    std::cout << "Score moyen : " << averageScore << std::endl;
}

void Player::showTotalScore()
{
    int totalScore = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        totalScore += _songScore[i];
    }
    std::cout << "Score total : " << totalScore << std::endl;
}

void Player::showHighScore()
{
    int highScore = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(_songScore[i] > highScore)
        {
            highScore = _songScore[i];
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

void Player::showLowScore()
{
    int lowScore = 101;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(_songScore[i] < lowScore && _songScore[i] > 0)
        {
            lowScore = _songScore[i];
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

void Player::showScores()
{
    for(int i = 0 ; i < 5 ; i++)
    {
        std::cout << "Chanson " << i << " : " << _songScore[i] << std::endl;
    }
}

void Player::addScore(int songNum)
{
    if(songNum < 0 || songNum > 4)
    {
        std::cout << "Nombre invalide" << std::endl;
        return;
    }
    srand(time(NULL));
    _score = rand() % 51 + 50;
    std::cout << "Score de cette partie : " << _score << std::endl;
    if(_score > _songScore[songNum])
    {
        _songScore[songNum] = _score;
        std::cout << "Nouveau record !" << std::endl;
    }
    else
    {
        std::cout << "Record sur cette chanson : " << _songScore[songNum] << std::endl;
    }
}