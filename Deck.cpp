#include <string>
#include <vector>
using namespace std;
#include "Deck.h"
#include "Card.h"

Deck::Deck()
{
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suits[4] = {'S', 'H', 'D', 'C'};
    int num = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++ )
        {
            Card c(ranks[j], suits[i]);
            deck.push_back(c);
            //deck[num].setCard(ranks[j], suits[i]);
            num++;
        }
    }
}

void Deck::refreshDeck()
{
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
   char suits[4] = {'S', 'H', 'D', 'C'};
    int num = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++ )
        {
            deck[num].setCard(ranks[j], suits[i]);
            num++;
        }
    }
    topCard = 0;
}

void Deck::shuffle() 
{
    srand(time(NULL));
    for (int i = 0; i < 1207; i++) 
    {
        int y = rand() % 52;
        int z = rand() % 52;

        Card temp = deck[y];
        deck[y] = deck[z];
        deck[z] = temp;
    }
}

Card Deck::deal()
{
    return deck[topCard++];
}

int Deck::cardsLeft() 
{
    return 52 - topCard;
}

void Deck::showDeck()
{
    for (int i = topCard; i < 52; i++)
    {
        deck[i].showCard();
        cout << ",";
        if ((i + 1) % 13 == 0){
            cout << endl;
        }
    }

}