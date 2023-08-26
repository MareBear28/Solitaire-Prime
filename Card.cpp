#include "Card.h"
#include <iostream>
#include <string>
using namespace std;


Card::Card() 
{
    r = 'A';
    s = 'S';
}

Card::Card(char rank, char su)
{
    r = rank;
    s = su;
}

void Card::setCard(char rank, char su)
{
    r = rank;
    s = su;
}

int Card::getValue()
{
    if (r == 'A') {
        return 1;
    }
    else if ((r == 'T') || (r == 'J') || (r == 'Q') || (r == 'K'))
    {
        return 10;
    }
    else {
        return int(r - '0');
    }
}

void Card::showCard()
{
    char su = this->s;
    if (this->r == 'J')
    {
        cout << 'J' << su;
    }
    else if (this->r == 'Q')
    {
        cout << 'Q' << su;
    }
    else if (this->r == 'K')
    {
        cout << 'K' << su;
    }
    else if (this->r == 'A')
    {
        cout << 'A' << su;
    }
    else
    {
        cout << this->r << su;
    }
}
    