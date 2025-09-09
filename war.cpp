#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "deck.h"
using namespace std;

int main () {
    srand(time(0));

    string playerOne, playerTwo;
    int playerOneWins = 0;
    int playerTwoWins = 0;
    int ties = 0;

    cout << "Enter the name of the first player: ";
    cin >> playerOne;
    cout << "Enter the name of the second player ";
    cin >> playerTwo;
    cout << endl;

    Deck gameDeck;

    cout << "Original Deck" << endl;
    gameDeck.display();
    cout << endl;

    gameDeck.shuffle();
    cout << "Shuffled Deck" << endl;
    gameDeck.display();
    cout << endl;

    for (int i=0; i<26; i++) {
        cout << "Game " << (i+1) << endl;
        cout << "__________" << endl;

        Card p1Card = gameDeck.deal();
        Card p2Card = gameDeck.deal();

        cout << "\t" << playerOne << "=>";
        p1Card.display();
        cout << endl;

        cout << "\t" << playerTwo << "=>";
        p2Card.display();
        cout << endl;

        int result = p1Card.whoWins(p2Card);

        if (result==1) {
            cout << playerOne << "=> Winner" << endl;
            playerOneWins++;
        }
        else if (result==-1) {
            cout << playerTwo << "=> Winner" << endl;
            playerTwoWins++;
        }
        else {
            cout << "Tie game" << endl;
            ties++;
        }
        std::cout << std::endl;
    }


    cout << "Final Scores" << endl;
    cout << "____________" << endl;
    cout << "\t" << playerOne << " vs. " << playerTwo << endl;
    cout << "Wins\t" << playerOneWins <<  "\t\t" << playerTwoWins << endl;
    cout << "Losses\t" << playerTwoWins << "\t\t" << playerOneWins << endl;
    cout << "Ties\t" << ties << "\t\t" << ties << endl;

    return 0;
}


