// Mariel Urbano
// Class (CECS 282-01)
// Project Name (Prog 1 – Solitaire Prime)
// Due Date (9/13/2021)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program
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
    