#include"TenHalf.h"


void TenHalf::play(){
	int a;
	cout << "�C���}�l\n--------\n���a�o�����a�@�i�P�C\n";
	forPok();
	open();
	cout << "�ثe�I�Ƭ�" << point() << "�I�C";
	for (int q = 0; q < 4; q++){
		do{
			cout << "�O�_�n�[�P(1:�O�A2:�_):";
			cin >> a;
		} while (a != 1 && a != 2);
		if (a == 2){
			cout << "���a�ӧQ!";
			break;
		}
		else{
			forPok();
			open();
			cout << "�ثe�I�Ƭ�" << point() << "�I�C";
			if (q == 0){
				if (point() == 10.5){
					cout << "���a�ӧQ!";
					break;
				}
			}
			if (bang() == 1&&few!=5){
				cout << "�I�ƶW�X10.5�A���a�ӧQ!";
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
		cout << "���a�ӧQ!";
	}
	else{
		cout << "�I�ƶW�X10.5�A���a�ӧQ!";
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