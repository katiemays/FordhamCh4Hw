// Katie Mays
// Nov. 6 2017
// program that uses a function to calc total cost

#include <iostream>
using namespace std;

// prototypes
double totalCost(int, double);

int main()
{
	// variables
	double price, bill;
	int number;

	// input
	cout << "Enter the number of items purchased : ";
	cin  >> number;
	cout << "           Enter the price per item : ";
	cin  >> price;

	// processing
	bill = totalCost(number, price);
	
	// output
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << number << " items at " << "$" << price << " each.\n"
	     << "Final bill, including tax, is $" << bill << "." << endl;

	return 0;
}

double totalCost(int numberPar, double pricePar)
{
	const double TAX_RATE = 0.05; //constants rule of programmers means its upper case
	double subTotal;

	subTotal = numberPar + pricePar;
	return (subTotal + (subTotal * TAX_RATE));
}

