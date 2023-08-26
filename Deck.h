#include "Card.h"
#include <iostream>
#include <vector>
#ifndef Deck_h
#define Deck_h
using namespace std;

class Deck
{
    public:
        Deck();
        void refreshDeck();
        Card deal();
        void shuffle();
        int cardsLeft();
        void showDeck();
    private:
        vector<Card> deck;
        int topCard = 0;
};
#endif