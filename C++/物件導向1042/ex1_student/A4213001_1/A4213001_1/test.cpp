// H1 �q�l�ƾǥ͸�ƥd ��߽��ˬd(2) // 
// ���i��ʥ��ɮפ��e // 

#include "StCard.h"
#include <iostream>

// ======================== //
// �Ф��n��ʳo���ɮת����e //
//                by Arlen  //
// ======================== // 

int main() {
	StCard st01("��", "�p��", 99.0, 88.0, 77.0, 1);
	st01.printCard();
	st01.setFullName("��", "�j��");
	st01.setScore(0, 11.54);
	st01.setScore(1, 22.46);
	st01.setScore(2, 33.73);

	std::cout << endl;

	std::cout << "(cout)�m�W �G" << st01.getFullName() << endl;
	std::cout << "(cout)����0�G" << fixed << setprecision(1) << st01.getScore(0) << endl;
	std::cout << "(cout)����1�G" << fixed << setprecision(1) << st01.getScore(1) << endl;
	std::cout << "(cout)����2�G" << fixed << setprecision(1) << st01.getScore(2) << endl;
	std::cout << "(cout)�ʧO �G" << ((st01.getSex() == 1) ? "�k" : "�k") << endl;

	std::cin.get();
}

// ======================== //
// �Ф��n��ʳo���ɮת����e //
//                by Arlen  //
// ======================== // 