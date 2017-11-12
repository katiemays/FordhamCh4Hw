// Katie Mays
// Nov. 16, 2017
// Lab 8: guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototype
int rollAndFlip(int, char);

int main()
{
	// variables
	int userPoints;
	int userDieGuess, userCoinGuess;
	char readyToPlay;
		

	// init
	srand(time(0));

	// greeting and instructions
	cout << "Welcome to guessing game! Guess what number will the die roll (1-6) and which side the coin will land on (H or T) to win 10 points. Get it wrong? -1 point!" << endl;

	do{ 
	// input
	cout << "Ready to play? (Y/N) : ";
	cin  >> readyToPlay;

	cout << "Guess first the dice roll, and next the coin flip: ";
	cin  >> userDieGuess >> userCoinGuess;

	// processing and call function
	correct = rollAndFlip(userDieGuess, userCoinGuess);

	} while (readyToPlay == 'Y' || readyToPlay == 'y');
	return 0;
}

int rollAndFlip(int dice, char coin)
{

