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

void StCard::printCard2(){
	if (getSex() == 1){
		cout << "姓名：" << getFullName() << "\n性別：" << "男\n生日：" << getStDate() << "\n成績：" << fixed << setprecision(1) << getScore(0) << ", " << getScore(1) << ", " << getScore(2);
	}
	else{
		cout << "姓名：" << getFullName() << "\n性別：" << "男\n生日：" << getStDate() << "\n成績：" << fixed << setprecision(1) << getScore(0) << ", " << getScore(1) << ", " << getScore(2);
	}
};


StCard::StCard(){

};

StCard::StCard(string ln, string fn, double s0, double s1, double s2, bool sexln,int yyyy,int mm,int dd){
	lastName = ln;
	firstName = fn;
	scoreAry[0] = s0;
	scoreAry[1] = s1;
	scoreAry[2] = s2;
	sex = sexln;
	StDate.setDate(yyyy, mm, dd);
};

string StCard::getStDate(){
	return to_string(StDate.getYear()) + "年" + to_string(StDate.getMouth()) + "月" + to_string(StDate.getDay()) + "日";
};

int StCard::getYear(){
	return StDate.getYear();
};

int StCard::getMouth(){
	return StDate.getMouth();
};

int StCard::getDay(){
	return StDate.getDay();
};

