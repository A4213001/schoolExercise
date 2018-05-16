// H1 �q�l�ƾǥ͸�ƥd �@�~ // 
// ���Хܭק�ϰ�~���i��ʥ��ɮפ��e // 

#include "StCard.h"
#include "Date.h"
#include <iostream>
#include <iomanip>	
using namespace std;

// ============================ //
// �Ф��n��ʳo���ɮת���L���e //
//                    by Arlen  //
// ============================ // 

double classSubjectAvg(int subSelect, int length, StCard stuAry[]);
int sexSum(bool sexSelect, int length, StCard stuAry[]);

int main() {
	const int STUD_NUM_OF_CLASS = 5;
	StCard ClassAry[STUD_NUM_OF_CLASS];
	int rankingAry[STUD_NUM_OF_CLASS];

	// ����l�Ƹ�ƽХ��b�o�̡� //
	ClassAry[0].setFullName("�x", "�D��");
	ClassAry[0].setScore(0, 99.0);
	ClassAry[0].setScore(1, 98.0);
	ClassAry[0].setScore(2, 97.0);
	ClassAry[0].setSex(1);
	ClassAry[0].StDate.setDate(1971,2,25);
	ClassAry[1].setFullName("��", "�ݷ�");
	ClassAry[1].setScore(0, 96.6);
	ClassAry[1].setScore(1, 95.5);
	ClassAry[1].setScore(2, 94.3);
	ClassAry[1].setSex(1);
	ClassAry[1].StDate.setDate(1970, 3, 33);
	ClassAry[2].setFullName("�}", "����");
	ClassAry[2].setScore(0, 93.2);
	ClassAry[2].setScore(1, 92.1);
	ClassAry[2].setScore(2, 90.9);
	ClassAry[2].setSex(1);
	ClassAry[2].StDate.setDate(1972, 4, 12);
	ClassAry[3].setFullName("��", "�Ѥj");
	ClassAry[3].setScore(0, 89.8);
	ClassAry[3].setScore(1, 88.7);
	ClassAry[3].setScore(2, 87.6);
	ClassAry[3].setSex(1);
	ClassAry[3].StDate.setDate(1973, 5, 21);
	ClassAry[4].setFullName("��", "�U��");
	ClassAry[4].setScore(0, 86.5);
	ClassAry[4].setScore(1, 85.4);
	ClassAry[4].setScore(2, 84.3);
	ClassAry[4].setSex(0);
	ClassAry[4].StDate.setDate(1974, 6, 3);
	// ����l�Ƹ�ƽХ��b�o�� ��//

	cout << "Personal Average of " << ClassAry[1].getFullName() << " is "
		<< fixed << setprecision(1) << ClassAry[1].getScoreAverage() << endl;

	cout << "Class Subject Average of Subject 0 is "
		<< fixed << setprecision(1)
		<< classSubjectAvg(0, STUD_NUM_OF_CLASS, ClassAry) << endl;

	cout << "The total number of male is "
		<< sexSum(1, STUD_NUM_OF_CLASS, ClassAry) << endl;

	cout << "The total number of female is "
		<< sexSum(0, STUD_NUM_OF_CLASS, ClassAry) << endl;

	int age = ClassAry[3].getAge();

	cout << "Age of " << ClassAry[3].getFullName() << " is "
		<< age << "." << endl;

	system("PAUSE");
}

// ============================ //
// �Ф��n��ʳo���ɮת���L���e //
//                    by Arlen  //
// ============================ // 

// ���\��禡 fuction �Х��b�o�� ��//
double classSubjectAvg(int subSelect, int length, StCard stuAry[]){
	double total = 0;
	if (subSelect == 0 || subSelect == 1 || subSelect == 2){
		for (int q =0; q <length; q++){
			total = total + stuAry[q].getScore(subSelect);
		}
		return total/5;
	}
	else{
		return -1.0;
	}
};

int sexSum(bool sexSelect, int length, StCard stuAry[]){
	int total = 0;
	if (sexSelect == 1){
		for (int q = 0; q < length; q++){
			if (stuAry[q].getSex()==1)
			total++;
		}
	}
	if (sexSelect == 0){
		for (int q = 0; q < length; q++){
			if (stuAry[q].getSex() == 0)
				total++;
		}
	}
	return total;
};


// ���\��禡 fuction �Х��b�o�� ��//