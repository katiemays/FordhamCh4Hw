// Katie Mays
// nov 2 2017
// simulate a dice game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	// vars
	int i, dice1, dice2, roll, ranNum;
	
	// init
	srand(time(0));

	// processing
	for (i=0;i < 10; i++)
	{
		ranNum = rand();
		dice1 = (ranNum % 6) + 1;

		ranNum = rand();
		dice2 = (ranNum % 6) + 1;
		
		roll = dice1 + dice2;

		cout << roll << endl;
	}

	return 0;
}
