// Katie Mays
// Nov 9, 2017
// Lab #7: check password w/ functions

#include <iostream>
using namespace std;

bool tenchar(string pwd)
{
	if (pwd.length() >= 10)
		return true;
	else 
		return false;
}
bool uppercase(string pwd)
{
	int i, len;
	char letter;
	// declare
	len = pwd.length();
	for (i=0; i < len; i++)
	{ 
		letter = pwd.at(i);

		if (letter >= 'A' && letter <= 'Z') 
			return true;
	}

	return false;
}
bool digit(string pwd)
{
	int i, len;
	char letter;
	//declare
	len = pwd.length();
	for (i=0; i < len; i++)
	{
		letter = pwd.at(i);

		if (letter >= '0' && letter <= '9')
			return true;
	}
	
	return false;
}
bool character(string pwd)
{
	int i, len;
	char letter;
	// declare
	len = pwd.length();
	for (i=0; i < len; i++)
	{
		letter = pwd.at(i);

		if ((letter == '!') || (letter == '@') || (letter == '#') || (letter == '$') || (letter == '%') || (letter == '^') || (letter == '&') || (letter == '*') || (letter == '(') || (letter == ')'))
			return true;
	}

	return false;
}
 
int main()
{
	// variables
	string pwd;

	// input
	cout << "Enter a password: ";
	cin  >> pwd;

	if ((tenchar(pwd)==false) || (uppercase(pwd)==false) || (digit(pwd)==false) || (character(pwd)==false))
		cout << "Invalid Password!" << endl;		
	else
		cout << "Valid Password!" << endl;


	return 0;
}
