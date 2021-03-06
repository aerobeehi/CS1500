/*
 * Lab02_Clarke_Lauria.cpp
 *
 *  Created on: Jul 7, 2015
 *     Author: lauriaclarke
 */

/***************************** Include Files *********************************/
#include <iostream>
#include <string>
//#include "HW01.h"

using namespace std;

/************************** Constant Definitions *****************************/
// Numerical values of menu options.
#define OPTION_ONE        1
#define OPTION_TWO        2
#define OPTION_THREE      3
#define OPTION_ZERO       0

// Text for menu options.
#define OPTION_ONE_MSG    "Login"
#define OPTION_TWO_MSG    "Register"
#define OPTION_THREE_MSG  "Login as Guest"
#define	OPTION_ZERO_MSG   "Quit"
#define ERROR_MSG         "Incorrect option. Please try again."
#define USER_NAME_MSG     "Enter User Name: "
#define PASSWORD_MSG      "Enter Password: "
#define VERIFY_PASSWORD   "Verify Password: "

/************************** Function Prototypes ******************************/

void printMenu();
void printMenuOption(int optionValue, string optionMessage);
void printSelectedOption(string optionMessage);

void login();
void registerUser();

int checkOption(int userInput);

/************************** Variable Definitions *****************************/

// Arrays containing information of pre-defined users.
string Alice[] = {"Alice", "Wonderland", "\nFollow me down the rabbit hole." };
string Thomas[] = {"Thomas", "Anderson", "\nThere is no spoon."};
string Yoda[] = {"Yoda", "Minch", "\nDo, or do not. There is no try"};

/******************************************************************************/
/******************************************************************************/

int main()
{
	int userInput;

    // Unless the result of checkOption is zero, the initial menu will be re-printed
	// each time the program returns to main.
	do
	{
		printMenu();
		cin >> userInput;
		userInput = checkOption(userInput);
	} while (userInput != 0);

	return 0;
}

/******************************************************************************
* Prints all menu options.
*
* @param void
* @return void
******************************************************************************/

void printMenu()
{
	cout << "\n*----------------------------*\n";
	printMenuOption(OPTION_ONE, OPTION_ONE_MSG);
	printMenuOption(OPTION_TWO, OPTION_TWO_MSG);
	printMenuOption(OPTION_THREE, OPTION_THREE_MSG);
	printMenuOption(OPTION_ZERO, OPTION_ZERO_MSG);

	cout << "\nPlease select an option : ";
}

/******************************************************************************
* Prints a single menu options.
*
* @param  numerical value of menu option
*         text to be displayed for menu option
* @return void
******************************************************************************/

void printMenuOption(int optionValue, string optionMessage)
{
	cout << "[" << optionValue << "] " << optionMessage << "\n";
}

/******************************************************************************
* Prints menu option selected by user.
*
* @param  void
* @return void
******************************************************************************/

void printSelectedOption(string optionMessage)
{
	cout << "\n-- " << optionMessage << " --\n\r";
}

/******************************************************************************
* Checks user input against available options and executes each.
*
* @param  input from user
* @return 1 if program should return to main menu - user selects 1,2,3
*         0 if program should quit - user selects 0
******************************************************************************/

int checkOption(int option)
{
	switch (option)
	{
	case OPTION_ONE:
		printSelectedOption(OPTION_ONE_MSG);
		login();
		return 1;

	case OPTION_TWO:
		printSelectedOption(OPTION_TWO_MSG);
		registerUser();
		return 1;

	case OPTION_THREE:
		printSelectedOption(OPTION_THREE_MSG);
		return 1;

	case OPTION_ZERO:
		printSelectedOption(OPTION_ZERO_MSG);
		cout << "\n\r" << "Quitting Menu..." << "\n";
		return 0;

	default:
		cout << "\n\r"
		ERROR_MSG << "\n\r";
	}

	return 0;
}

/******************************************************************************
* Prompts pre-defined user to input user name and password. If user name and
* password match defined entries in arrays Alice, Thomas, or Yoda, the
* corresponding welcome message is displayed. If the user name or password
* does not match, the program returns to the main menu.
*
* @param  void
* @return void
******************************************************************************/

void login()
{
	string username;
	string password;

	cout << USER_NAME_MSG;
	cin >> username;

	cout << PASSWORD_MSG;
	cin >> password;

	if (username == Alice[0] && password == Alice[1])
	{
		cout << Alice[2] << "\n";
	}
	else if (username == Thomas[0] && password == Thomas[1])
	{
		cout << Thomas[2] << "\n";
	}
	else if (username == Yoda[0] && password == Yoda[1])
	{
		cout << Yoda[2] << "\n";
	}
	else
	{
		cout << "User name or password incorrect.\n\r";
	}
}

/******************************************************************************/
/**
* Prompts user to input user name and password. Asks user to re-enter password
* for verification. If passwords do not match, program returns to main menu.
*
* @param  void
* @return void
/******************************************************************************/

void registerUser()
{
	bool passwordMatch;
	string userName;
	string firstPassword;
	string secondPassword;

	cout << USER_NAME_MSG;
	cin >> userName;

	cout << PASSWORD_MSG;
	cin >> firstPassword;

	cout << VERIFY_PASSWORD;
	cin >> secondPassword;

	if (firstPassword == secondPassword)
	{
		passwordMatch = 1;
	}
	else
	{
		passwordMatch = 0;
		cout << "Passwords do not match. Please try again.\n";
	}
}

