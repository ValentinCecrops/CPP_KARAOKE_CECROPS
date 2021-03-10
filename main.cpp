#include <string>
#include <iostream>
#include "Player.cpp"

using namespace std;

int main()
{
    string playerName;
    int choice = 0;
    int songChoice;

    cout << "Entrez votre pseudo : ";
    cin >> playerName;
    Player player(playerName);

    while(choice != 7)
    {
        cout << "Que voulez vous faire ?" << endl;
        cout << "1 : Afficher les scores" << endl;
        cout << "2 : Afficher le score total" << endl;
        cout << "3 : Afficher le score moyen" << endl;
        cout << "4 : Afficher le meilleur score" << endl;
        cout << "5 : Afficher le pire score" << endl;
        cout << "6 : Ajouter un score" << endl;
        cout << "7 : Quitter" << endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            player.showScores();
            break;
        
        case 2:
            player.showTotalScore();
            break;
        
        case 3:
            player.showAverageScore();
            break;
        
        case 4:
            player.showHighScore();
            break;
        
        case 5:
            player.showLowScore();
            break;
        
        case 6:
            cout << "Quelle chanson voulez vous jouer ?" << endl;
            cin >> songChoice;
            player.addScore(songChoice);
            break;

        default:
            break;
        }
    }
}