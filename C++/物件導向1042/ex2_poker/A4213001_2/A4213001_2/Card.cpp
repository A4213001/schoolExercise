#include"Card.h"

void Card::printCard(){
	switch (suit)
	{
	case 1:cout << '\3';
		break;
	case 2:cout << '\4';
		break;
	case 3:cout << '\5';
		break;
	case 4:cout << '\6';
		break;
}
	switch (symbol)
	{
	case 1:cout << "A";
		break;
	case 2:cout << "2";
		break;
	case 3:cout << "3";
		break;
	case 4:cout << "4";
		break;
	case 5:cout << "5";
		break;
	case 6:cout << "6";
		break;
	case 7:cout << "7";
		break;
	case 8:cout << "8";
		break;
	case 9:cout << "9";
		break;
	case 10:cout << "10";
		break;
	case 11:cout << "J";
		break;
	case 12:cout << "Q";
		break;
	case 13:cout << "K";
		break;
	}
};
void Card::setCard(int su, int sy){
	if (su>=1&&su<=4)
		suit = su;
	else{
		cout << "�]�w�����~�A����ܬ�\3" << endl;
		suit = 1;
	}
	if (sy>=1&&sy<=13)
		symbol = sy;
	else{
		cout << "�]�w�Ÿ����~�A�Ÿ��ܬ�A" << endl;
		symbol = 1;
	}
};
int Card::getSuit(){
	return suit;
};
int Card::getSymbol(){
	return symbol;
};
Card::Card(){
	suit = 1;
	symbol = 1;

};