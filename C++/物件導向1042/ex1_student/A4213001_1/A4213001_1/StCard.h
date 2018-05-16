#include<string>
using namespace std;
#include<iomanip>
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

	void printCard();

	StCard();

	StCard(string ln, string fn, double s0, double s1, double s2, bool sexln);
};