// Katie Mays
// Nov. 9, 2017
// HW #7: vending machine

#include <iostream>
using namespace std;

int main ()
{
	// init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// variables
	const double DOLLAR = 1.00, QUARTER = 0.25, DIME = 0.10, NICKEL = 0.05;
	double leftToPay = 3.50;
	int whichCoin;

	// input
		cout << "Deep fried Twinkie price is $3.50." << endl;
	do
	{		
		cout << "What coin are you inserting? \n 1. Dollar \n 2. Quarter \n 3. Dime \n 4. Nickel \n" << endl;
		cin  >> whichCoin;
		
		// processing
		if (whichCoin == 1)
			leftToPay = leftToPay - DOLLAR;
		else if (whichCoin == 2)
			leftToPay = leftToPay - QUARTER;
		else if (whichCoin == 3)
			leftToPay = leftToPay - DIME;
		else if (whichCoin == 4)
			leftToPay = leftToPay - NICKEL;

		//output
		cout << "Remaining cost is $" << leftToPay << endl;
 
	} while (leftToPay > 0);

	cout << "Enjoy your deep fried Twinkie!" << endl;

	return 0;
}
