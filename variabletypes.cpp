// Katie Mays
// Nov 2. 2017
// global and local variables

#include <iostream>
using namespace std;

int a=20;

void func1()
{
	cout << "func1 a = " << a << endl;
}

void func2()
{
	a++;
}

void func3()
{
	int a = 100;

	a--;
}

int main()
{
	func1();

	func3();
	func3();
	func3();
	func3();
	func3();
	func3();
	func3();
	func3();
	func3();

	func1();
	
	return 0;
}
