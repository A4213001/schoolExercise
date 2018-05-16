#include"Card.h"

int main(){
	Card cd;
	
	cout << "cd.setCard(3,5)" << endl;
	cd.setCard(3, 5);
	cd.printCard();
	cout << endl;

	cout << "cd.setCard(5,2)" << endl;
	cd.setCard(5, 2);
	cd.printCard();
	cout << endl;

	cout << "cd.setCard(2,14)" << endl;
	cd.setCard(2, 14);
	cd.printCard();
	cout << endl;

	system("pause");
}