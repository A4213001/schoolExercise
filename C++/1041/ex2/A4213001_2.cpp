#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double a){
	double b;
	if(a<=3){
		b=2;
	}
	if(a>=19){
		b=10;
	}
	if(a>3&&a<19){
		b=2+0.5*(a-3);
	}
	return b;
}

int main()
{
   double hour; // number of hours for current car
   double currentCharge; // parking charge for current car
   double totalCharges = 0.0; // total charges
   double totalHours = 0.0; // total number of hours
   bool first = true; // used for printing table headers

   cout << fixed; // set floating-point number format
   cout << "Enter the hours parked for 3 cars: ";

   // loop 3 times for 3 cars
   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      totalHours += hour; // add current hours to total hours

      // if first time through loop, display headers
      if ( first )
      {
         cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours"
            << setw( 15 ) << "Charge\n";

         first = false; // prevent from printing again
      } // end if

      // calculate current car's parking charge
      currentCharge = calculateCharges( hour );
      totalCharges += currentCharge; // update total charges

      // display row data for current car
      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour
         << setw( 14 ) << setprecision( 2 ) << currentCharge << "\n";
   } // end for

   // display row data for totals
   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
      << totalHours << setw( 14 ) << setprecision( 2 )
      << totalCharges << endl;
} // end main

