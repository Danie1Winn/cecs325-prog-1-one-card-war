#ifndef deck_h
#define deck_h
#include "card.h"

class Deck{
public:
    Deck();
    
    Card deal();

    void display();

    void shuffle();

private:
    Card myDeck[52];
    int topCard;
};

#endif // deck_h