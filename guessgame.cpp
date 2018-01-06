// Katie Mays
// Nov. 16, 2017
// Lab 8: guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototype
void userInput(int&, char&);
int computerRoll(int&);
int computerFlip(int&, char&);

int main()
{
	// variables
	int roll, compRoll, coin, totalPoints = 0;
	char rerun, value, compCoin, flip;

	// init
	srand(time(0));

	// greeting and instructions
	cout << "Welcome to guessing game! Guess what number will the die roll (1-6) and which side the coin will land on (H or T) to win 10 points. Get it wrong? -1 point!" << endl;

	do{ 
		userInput(roll, flip);
		computerRoll(compRoll);
		computerFlip(coin, compCoin);

		// determine points
		if ((roll == compRoll) && (flip == compCoin))
		{
			cout << "Correct! The roll was " << compRoll << ", and coin flip was " << compCoin << "." << endl;
			totalPoints = totalPoints + 10;
			cout << "Total points : " << totalPoints << endl;
		}
		else 
		{
			cout << "Incorrect! The roll was " << compRoll << ", and coin flip was " << compCoin << "." << endl;
			totalPoints = totalPoints - 1;
			cout << "Total points : " << totalPoints << endl;
		}

		// rerun
		cout << "Would you like to keep playing? \n";
		cin  >> rerun;

	} while (rerun == 'Y' || rerun == 'y');
	
	return 0;
}

void userInput (int& roll, char& flip)
{
	cout << "Guess a (6-sided) die roll: ";
	cin  >> roll;
	cout << "         Guess a coin flip: ";
	cin  >> flip;
}

int computerRoll (int& compRoll)
{
	int ranNumber;

	// init
	srand(time(0));

	// processing
	ranNumber = rand();
	compRoll = (ranNumber % 6) + 1;
}

int computerFlip (int& coin, char& compCoin)
{
	int ranNumber;

	// init
	srand(time(0));

	// processing
	ranNumber = rand();
	coin = (ranNumber % 2);

	if (coin = 0)
		compCoin = 'H';
	else
		compCoin = 'T';
}
