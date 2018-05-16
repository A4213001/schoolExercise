#include <iostream>
using namespace std;

int integerPower(int a,int b){
	int c=1;
	for(int q=1;q<=b;q++){
		c=c*a;
	}
	return c;
}


int main()
{
   int exp; // integer exponent
   int base; // integer base

   cout << "Enter base and exponent: ";
   cin >> base >> exp;
   cout << base << " to the power " << exp << " is: "
      << integerPower( base, exp ) << endl;
} // end main
