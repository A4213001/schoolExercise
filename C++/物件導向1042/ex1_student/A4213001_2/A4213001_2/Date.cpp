#include"Date.h"

void Date::setDate(int yyyy, int mm, int dd){
	int aa[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (yyyy >= 1970 && yyyy <= 2016){
		year = yyyy;
	}
	else
		year = 1970;
	if (mm >= 1 && mm <= 12){
		mouth = mm;
	}
	else
		mouth = 1;
	if (yyyy % 400 == 0 || yyyy % 100 != 0 && yyyy % 4 == 0)
		aa[1] = 29;
	if (dd >= 1 && dd <= aa[mm - 1]){
		day = dd;
	}
	else
		day = 1;
};

int Date::getYear(){
	return year;
};

int Date::getMouth(){
	return mouth;
};

int Date::getDay(){
	return day;
};

Date::Date(){

};
