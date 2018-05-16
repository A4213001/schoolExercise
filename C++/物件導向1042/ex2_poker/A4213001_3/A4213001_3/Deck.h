#ifndef DECK_H
#define DECK_H

#include"Card.h"

class Deck
{
private:
	static const int DECK_SIZE = 52;
	Card *deckAry = new Card[DECK_SIZE];
	void swapByAddress(Card *, Card *) const;
	void swapByReference(Card &deckAry, Card &) const;
public:
	Card *createDeck() const;
	void Shuffle() const;
	void Show() const;
	Card getDeck(int few) const;
	Deck();
	~Deck();
};
#endif