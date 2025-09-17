// Name: Daniel Winn
// Class (CECS 325-02)
// Project Name (Prog 1 - WAR)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
#ifndef card_h
#define card_h

/**
 * @class Card
 * @brief This class represents one playing card, with a rank and a suit.
 */
class Card {
public:
    /**
     * @brief 
     * @param r Contains the character for rank of the card (e.g. 'A' is Ace or 1, 'K' is King or 13, 'T' is 10)
     * @param s Contain the character for the suit of the card (e.g. 'S' is Spades, 'H' is Hearts, etc.)
     */
    Card(char r, char s);
    
    /**
     * @brief Default Card constructor
     * Creates an array of Card objects for the Deck class.
     */
    Card();

    /**
     * @brief Displays the current card to the console.
     * Prints the rank and suit of the card based on the case stored in getValue()
     */
    void display();

    /**
     * @brief Compares the ranks of two cards.
     * @param otherCard The other card (of player 2) to compare against.
     * @return 1 if the first card wins
     * @return -1 if the other card wins
     * @return 0 if it's a tie
     */
    int compare(Card otherCard);

private:
    char rank; ///< The card's rank ('A', '2'-'9', 'T', 'J', 'Q', 'K')
    char suit; ///< The card's suit ('S', 'H', 'C', 'D')

    /**
     * @brief Gets the card rank's numerical value (e.g. 'J' = 11)
     * @return The integer that reflects rank value of the card.
     */
    int getValue();
};

#endif // card_h