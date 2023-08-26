#include <iostream>
#include <string>;
using namespace std;
#include "Deck.h"
#include "Card.h"


int menu()
{
    cout << "Welcome to Solitaire Prime!" << endl;
    cout << "1) New Deck" << endl;
    cout << "2) Display Deck" << endl;
    cout << "3) Shuffle Deck" << endl;
    cout << "4) Play Solitaire Prime" << endl;
    cout << "5) Exit" << endl;
    int answer;
    cin >> answer;
    return answer;
}

bool isPrime(int num) 
{
    if (num == 1) 
    {
        return false;
    }
    else 
    {
        for (int i = 2; i < num; i++) 
        {
            if (num % i == 0) 
            {
                return false;
            }
        }
        return true;
    }
}

void play(Deck d) 
{
    int sum = 0;
    int piles = 0;
    while (d.cardsLeft() != 0) 
    {
        Card c = d.deal();
        sum += c.getValue();
        if (isPrime(sum)) 
        {
            c.showCard();
            cout << ", Prime: " << sum << endl;
            sum = 0;
            piles++;
        }
        else 
        {
            c.showCard();
            cout << ", ";
        }
    }
    if (isPrime(sum))
    {
        cout << "Winner in " << piles << " piles!" << endl;
    }
    else 
    {
        cout << endl;
        cout << "Loser :(" << endl;
        cout << "Sum: " << sum << endl;
    }
    cout << endl;
}

int main()
{
    Deck d1;
    int answer = 0;
    while (answer != 5) 
    {
        answer = menu();
        cout << endl;
        if (answer == 1) 
        {
            d1.refreshDeck();
        }
        else if (answer == 2) 
        {
            d1.showDeck();
            cout << endl;
        }
        else if (answer == 3)
        {
            d1.shuffle();
        }
        else if (answer == 4)
        {
            play(d1);
        }   
    }
    return 0;
}
