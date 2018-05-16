#include<iostream>
#include<string>
using namespace std;
#include"StCard.h"

void StCard::setFullName(string ln, string fn){
	lastName = ln;
	firstName = fn;
};

void StCard::setScore(int select, double scln){
	if (select == 0 || select == 1 || select == 2){
		if (scln > 0.0&&scln < 100.0){
			scoreAry[select] = scln;
		}
		else{
			scoreAry[select] = 0.0;
		}
	}
};

string StCard::getFullName(){
	return lastName +" "+ firstName;
};

double StCard::getScore(int select){
	if (select == 0 || select == 1 || select == 2){
		return scoreAry[select];
	}
	else{
		return -1.0;
	}
};

bool StCard::getSex(){
	return sex;
};

void StCard::printCard(){
	if (getSex() == 1){
		cout << "姓名：" << getFullName() << "，性別：" << "男，成績：" << fixed << setprecision(1) << getScore(0) << ", " << getScore(1) << ", " << getScore(2) << endl;
	}
	else{
		cout << "姓名：" << getFullName() << "，性別：" << "女，成績：" << fixed << setprecision(1) << getScore(0) << ", " << getScore(1) << ", " << getScore(2) << endl;
	}
};


StCard::StCard(){

};

StCard::StCard(string ln, string fn, double s0, double s1, double s2, bool sexln){
	lastName = ln;
	firstName = fn;
	scoreAry[0] = s0;
	scoreAry[1] = s1;
	scoreAry[2] = s2;
	sex = sexln;
};
