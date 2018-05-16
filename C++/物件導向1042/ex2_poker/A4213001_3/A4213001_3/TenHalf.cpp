#include"TenHalf.h"


void TenHalf::play(){
	int a;
	cout << "遊戲開始\n--------\n莊家發給玩家一張牌。\n";
	forPok();
	open();
	cout << "目前點數為" << point() << "點。";
	for (int q = 0; q < 4; q++){
		do{
			cout << "是否要加牌(1:是，2:否):";
			cin >> a;
		} while (a != 1 && a != 2);
		if (a == 2){
			cout << "莊家勝利!";
			break;
		}
		else{
			forPok();
			open();
			cout << "目前點數為" << point() << "點。";
			if (q == 0){
				if (point() == 10.5){
					cout << "玩家勝利!";
					break;
				}
			}
			if (bang() == 1&&few!=5){
				cout << "點數超出10.5，莊家勝利!";
				break;
			}
		}
	}
	if (few == 5){ 
		worl();
	}
};
void TenHalf::forPok(){
	srand(time(0));
		myPok[few] = s1.getDeck(rand() % 52);
		for (int q = 0; q < few; q++){
			if (myPok[few].getSuit() == myPok[q].getSuit()&&myPok[few].getSymbol()==myPok[q].getSymbol()){
				myPok[few] = s1.getDeck(rand() % 52);
				continue;
			}
		}
		few++;
};
void TenHalf::open() const{
	for (int q = 0; q < 5; q++){
		myPok[q].printCard();
		cout << "	";
	}
	cout << endl;
};
double TenHalf::point() const{
	double total=0;
	for (int q = 0; q < 5; q++){
		if (myPok[q].getSymbol()<11)
			total += myPok[q].getSymbol();
		else
			total += 0.5;
	}
	return total;
};
void TenHalf::worl() const{
	if (point() <= 10.5){
		cout << "玩家勝利!";
	}
	else{
		cout << "點數超出10.5，莊家勝利!";
	}
};
bool TenHalf::bang() const{
	if (point() > 10.5){
		return 1;
	}
	else
		return 0;
};
TenHalf::TenHalf(){

};