#ifndef CARD_H
#define CARD_H


#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
class Card
{
private:
	int suit;
	int symbol;

public:
	void printCard();
	void setCard(int su, int sy);
	int getSuit();
	int getSymbol();
	Card();
};
#endif