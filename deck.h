#ifndef deck_h
#define deck_h
#include "card.h"

class Deck{
/**
 * @class Deck
 * @brief This class constructs and manages 52 playing cards.
 *
 * Responsible for making a standard 52 card deck and shuffling it one card at a time.
 * Uses an array to store the Card objects.
 */
public:
    /**
     * @brief Constructor that creates the Deck object.
     * Initializes the standard 52 card deck which is sorted by suit then rank.
     */
    Deck();

    /**
     * @brief Deals a single card from the top of the deck.
     * @return 'Card' object at the top of the deck.
     * @see shuffle()
     */
    Card deal();

    /**
     * @brief Displays the 52 card deck to the console.
     *
     * Prints all 52 cards. This is formatted into 4 rows, 13 cards each.
     * Allows the user to verify that the deck was properly shuffled.
     */
    void display();

    /**
     * @brief Randomly shuffles the deck.
     * Uses cstdlib's shuffle function to randomize the card order.
     */
    void shuffle();

private:
    Card myDeck[52]; ///< An array containing 52 'Card' objects.
    int topCard; ///< The index of the card to be dealt.
};

#endif // deck_h