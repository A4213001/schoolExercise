#ifndef H_DATE
#define H_DATE
class Date
{
private:
	int year;

	int mouth;

	int day;

public:
	void setDate(int, int, int);

	int getYear();

	int getMouth();

	int getDay();

	Date();
};

#endif