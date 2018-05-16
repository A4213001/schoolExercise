#include"Date.h"
#include<string>
using namespace std;
#include<iomanip>
#include<iostream>
#include <sstream>
class StCard
{
private:
	string lastName;

	string firstName;

	static const int SA_SIZE = 3;

	double scoreAry[SA_SIZE];

	bool sex;

public:
	void setFullName(string ln, string fn);

	void setScore(int select, double scln);

	string getFullName();

	double getScore(int select);

	bool getSex();

	void printCard2();

	StCard();

	StCard(string ln, string fn, double s0, double s1, double s2, bool sexln,int yyyy,int mm,int dd);

	string getStDate();

	int getYear();

	int getMouth();

	int getDay();

	void print();

	Date StDate;

	double getScoreAverage();

	int getAge();

	void setSex(bool);
};



