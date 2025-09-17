// Name: Daniel Winn
// Class (CECS 325-02)
// Project Name (Prog 1 - WAR)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
#include "card.h"
#include <iostream>
using namespace std; // Allows for shortcuts

// Initializing a card with a rank and suit
Card::Card(char r, char s) {
    rank = r;
    suit = s;
}

// Initializes a card with no assigned rank or suit. Left empty; Deck will create the actual cards.
Card::Card() {

}

void Card::display() {
    if (rank == 'T') {
        cout << "10" << suit;
    }
    else {
        cout << rank << suit;
    }
}

int Card::compare(Card otherCard) {
    int myValue = this -> getValue();
    int otherValue = otherCard.getValue();

    if (myValue > otherValue) {
        return 1; // myValue wins
    }
    else if (myValue < otherValue) {
        return -1; // otherValue wins
    }
    else {
        return 0; // Tie
    }
}

int Card::getValue() {
    switch (rank) {
        case 'K':
        return 13;
        case 'Q':
        return 12;
        case 'J':
        return 11;
        case 'T':
        return 10;
        case '9':
        return 9;
        case '8':
        return 8;
        case '7':
        return 7;
        case '6':
        return 6;
        case '5':
        return 5;
        case '4':
        return 4;
        case '3':
        return 3;
        case '2':
        return 2;
        case 'A':
        return 1;
        default:
        return 0;
    }
}