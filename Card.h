#include <iostream>
#ifndef Card_h
#define Card_h
class Card
{
private:
    char s; //suit
    char r; //rank

public:
    Card();
    Card(char, char);
    void setCard(char, char);
    int getValue();
    void showCard();

};
#endif