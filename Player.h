#include <string>

class Player
{
private:
    std::string _name;
    int _songScore[5];
    int _score;
public:
    void showAverageScore(int * scores);
    void showTotalScore(int * scores);
    void showHighScore(int * scores);
    void showLowScore(int * scores);
    void showScores(int * scores);
    int addScore();
    Player(std::string name);
    Player();
};