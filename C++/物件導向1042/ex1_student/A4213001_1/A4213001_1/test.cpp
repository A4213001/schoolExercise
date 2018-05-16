// H1 電子化學生資料卡 實習課檢查(2) // 
// 不可更動本檔案內容 // 

#include "StCard.h"
#include <iostream>

// ======================== //
// 請不要更動這個檔案的內容 //
//                by Arlen  //
// ======================== // 

int main() {
	StCard st01("王", "小明", 99.0, 88.0, 77.0, 1);
	st01.printCard();
	st01.setFullName("陳", "大白");
	st01.setScore(0, 11.54);
	st01.setScore(1, 22.46);
	st01.setScore(2, 33.73);

	std::cout << endl;

	std::cout << "(cout)姓名 ：" << st01.getFullName() << endl;
	std::cout << "(cout)分數0：" << fixed << setprecision(1) << st01.getScore(0) << endl;
	std::cout << "(cout)分數1：" << fixed << setprecision(1) << st01.getScore(1) << endl;
	std::cout << "(cout)分數2：" << fixed << setprecision(1) << st01.getScore(2) << endl;
	std::cout << "(cout)性別 ：" << ((st01.getSex() == 1) ? "男" : "女") << endl;

	std::cin.get();
}

// ======================== //
// 請不要更動這個檔案的內容 //
//                by Arlen  //
// ======================== // 