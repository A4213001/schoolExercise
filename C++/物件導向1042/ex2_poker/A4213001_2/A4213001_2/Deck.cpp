#include"Deck.h"

static const int DECK_SIZE = 52;

void Deck::swapByAddress(Card *arr, Card *arr2) const{
	Card a;
	a = *arr;
	*arr = *arr2;
	*arr2 = a;
};
void Deck::swapByReference(Card &arr, Card &arr2) const{
	Card a;
	a = arr;
	arr = arr2;
	arr2 = a;
};

void Deck::Shuffle() const{
	int a;
	srand(time(0));
	for (int q = 0; q < 26; q++){
		a = rand() % 52;
		swapByAddress(&deckAry[q], &deckAry[a]);
	};
	for (int q = 26; q < 52; q++){
		a = rand() % 52;
		swapByReference(deckAry[q], deckAry[a]);
	}

};
void Deck::Show() const{
	for (int e = 0; e < 52; e++){
		deckAry[e].printCard();
		cout << " ";
		if ((e + 1) % 13 == 0){
			cout << endl;
		}
	}
};
Deck::Deck(){
	int e = 0;
	for (int q = 1; q <= 4; q++){
		for (int w = 1; w <= 13; w++){
				deckAry[e].setCard(q, w);
				e++;
		}
	}
};
Deck::~Deck(){
	delete [] deckAry;
	cout << "¤w§R°£deckAry";
};

Card* Deck::createDeck() const{
	Card *deckAry = new Card[DECK_SIZE];
	return deckAry;
};