#ifndef card_h
#define card_h

class Card {
public:
    Card(char r, char s);
    Card();

    void display();

    int whoWins(Card otherCard);

private:
    char rank;
    char suit;

    int getValue();
};

#endif // card_h