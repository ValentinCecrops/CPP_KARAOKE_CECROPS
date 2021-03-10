#include <string>

class Player
{
private:
    std::string _name;
    int _songScore[5] = {0,0,0,0,0};
    int _score;
public:
    void showAverageScore();
    void showTotalScore();
    void showHighScore();
    void showLowScore();
    void showScores();
    void addScore(int songNum);
    Player(std::string name);
    Player();
};