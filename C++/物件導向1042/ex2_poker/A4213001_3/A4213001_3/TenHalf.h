#ifndef TENHALF_H
#define TENHALF_H
#include"Deck.h"

class TenHalf
{
private:
	static const int MYPOK_SIZE = 5;
	Card *myPok=new Card[MYPOK_SIZE];
	int few;
	void forPok();
	void open() const;
	double point() const;
	void worl() const;
	bool bang() const;
public:
	void play();
	TenHalf();
	Deck s1;
};
#endif