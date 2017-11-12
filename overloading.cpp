// Katie Mays
// nov 9, 2017
// overloading example
 #include <iostream>
using namespace std;

// prototypes
double avg(double,double);
double avg(double,double,double);

int main()
{
	double a, b, c;
	cout << "Enter three numbers to find the average of : ";
	cin  >> a >> b >> c;
	cout << "The average of " << a << ", " << b << ", and " << c << " is " << avg(a, b, c) << endl;

	cout << "Enter two numbers to find the average of : ";
	cin  >> a >> b;
	cout << "The average of " << a << ", " << b << ", and " << c << " is " << avg(a, b) << endl;


	return 0;
}

double avg(double num1, double num2)
{
	return ((num1 + num2) / 2.0);
}

double avg(double x, double y, double z)
{
	return ((x + y + z) / 3.0);
}
