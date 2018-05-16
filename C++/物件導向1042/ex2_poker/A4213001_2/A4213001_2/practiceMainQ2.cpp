#include"Deck.h"

int main(){
	Deck dk;
	cout << "印出初始牌"<<endl;
	dk.Show();
	dk.Shuffle();
	cout << "洗牌後印出"<<endl;
	dk.Show();
	system("PAUSE");
}
