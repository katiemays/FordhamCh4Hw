// Katie Mays
// Oct. 23, 2017
// calling a function

#include  <iostream>
using namespace std;

void sampleFunction(int);

void sampleFunction2()
{
	cout << "Halloween is almost here!" << endl;
}

int main()
{
	int i;

	for (i=0; i < 5; i++);
	{
		sampleFunction(i);
		sampleFunction2();
	}

	return 0;
}


