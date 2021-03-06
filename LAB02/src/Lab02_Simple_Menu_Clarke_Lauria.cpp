/*
 * Lab02_Clarke_Lauria.cpp
 *
 *  Created on: Jul 7, 2015
 *     Author: lauriaclarke
 */

#include <iostream>
#include <string>

using namespace std;

#define OPTION_ONE   1
#define OPTION_TWO   2
#define OPTION_THREE 3
#define OPTION_FOUR  4
#define OPTION_FIVE  5
#define OPTION_SIX   6
#define OPTION_ZERO  0

#define OPTION_ONE_MSG    "Create an Application"
#define OPTION_TWO_MSG    "List all Applications"
#define OPTION_THREE_MSG  "Find Applications"
#define OPTION_FOUR_MSG   "Create a Page"
#define	OPTION_FIVE_MSG   "List all Pages"
#define	OPTION_SIX_MSG    "Find Pages"
#define	OPTION_ZERO_MSG   "Quit"
#define ERROR_MSG "Incorrect option. Please try again."
#define SELECTION_MSG	  "You have chosen to - "

void printMenu();
void printOption(string optionMessage);
int checkOption(int option);

int main()
{
	int userInput;

	do
	{
		printMenu();
		cin >> userInput;
		checkOption(userInput);
	} while (userInput != 0);

	return 0;
}

void printMenu()
{
	cout << "*----------------------------*" << "\n";
	cout << "[1] " << OPTION_ONE_MSG << "\n";
	cout << "[2] " << OPTION_TWO_MSG << "\n";
	cout << "[3] " << OPTION_THREE_MSG << "\n";
	cout << "[4] " << OPTION_FOUR_MSG << "\n";
	cout << "[5] " << OPTION_FIVE_MSG << "\n";
	cout << "[6] " << OPTION_SIX_MSG << "\n";
	cout << "[0] " << OPTION_ZERO_MSG << "\r\n";

	cout << "Please select an option : ";
}

int checkOption(int option)
{
	switch (option)
	{
		case OPTION_ONE:
			printOption(OPTION_ONE_MSG);
			return 1;

		case OPTION_TWO:
			printOption(OPTION_TWO_MSG);
			return 1;

		case OPTION_THREE:
			printOption(OPTION_THREE_MSG);
			return 1;

		case OPTION_FOUR:
			printOption(OPTION_FOUR_MSG);
			return 1;

		case OPTION_FIVE:
			printOption(OPTION_FIVE_MSG);
			return 1;

		case OPTION_SIX:
			printOption(OPTION_SIX_MSG);
			return 1;

		case OPTION_ZERO:
			printOption(OPTION_ZERO_MSG);
			cout << "\r\n" << "Quitting Menu..." << "\r\n";
			return 0;

		default:
			printOption(ERROR_MSG);
	}

	return 0;
}

void printOption(string optionMessage)
{
 cout << SELECTION_MSG << optionMessage << "\r\n";
}
