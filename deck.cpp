#include "deck.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; // Allows for shortcuts

Deck::Deck() {
    char suits [] = {'C', 'S', 'D', 'H'}; // Clubs, spades, diamonds, hearts
    char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    topCard = 0;
    int cardIndex = 0;

    for (int s=0; s<4; s++) {
        for (int r=0; r < 13; r++) {
            myDeck[cardIndex] = Card(ranks[r], suits[s]);
            cardIndex++;
        }
    }
}

Card Deck::deal() {
    Card dealtCard = myDeck[topCard];
    topCard++;
    return dealtCard
}

void Deck::display() {
    for (int i=0; i<52; i++) {
        theDeck[i].display();
        cout << ",";

        if ((i+1)%13==0) {
            cout << endl;
        }
    }
}

viud Deck::shuffle() {
    topCard = 0;

    for (int i=51; i>0; i--) {
        int j = rand() % (i+1);

        Card temp = myDeck[i];
        myDeck[i] = myDeck[j];
        myDeck[j] = temp;
    }
}