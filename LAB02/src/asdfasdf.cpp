///*
// * asdfasdf.cpp
// *
// *  Created on: Jul 9, 2015
// *      Author: lauriaclarke
// */
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//#define OPTION_ONE   1
//#define OPTION_TWO   2
//#define OPTION_THREE 3
//#define OPTION_FOUR  4
//#define OPTION_FIVE  5
//#define OPTION_SIX   6
//#define OPTION_ZERO  0
//
//const string OPTION_TWO_MSG  =  "List all Applications";
//const string OPTION_THREE_MSG = "Find Applications";
//const string OPTION_FOUR_MSG = "Create a Page";
//const string OPTION_FIVE_MSG = "List all Pages";
//const string OPTION_SIX_MSG  = "Find Pages";
//const string OPTION_ZERO_MSG = "Quit";
//const string ERROR_MESSAGE_MSG = "Incorrect option. Please try again.";
//const string SELECTION_MSG = "You have chosen to - ";
//
//void firstMenu();
//void printOption(string optionMessage);
//int checkOption(int option);
//
//
//
//int main()
//{
//	int userInput;
//
//	do
//	{
//		firstMenu();
//		cin >> userInput;
//		checkOption(userInput);
//	} while (userInput != 0);
//
//	return 0;
//}
//
//void firstMenu()
//{
//	cout << "*----------------------------*" << "\n";
//	cout << "[1] " << OPTION_ONE_MSG << "\n";
//	cout << "[2] " << OPTION_TWO_MSG << "\n";
//	cout << "[3] " << OPTION_THREE_MSG << "\n";
//	cout << "[4] " << OPTION_FOUR_MSG << "\n";
//	cout << "[5] " << OPTION_FIVE_MSG << "\n";
//	cout << "[6] " << OPTION_SIX_MSG << "\n";
//	cout << "[0] " << OPTION_ZERO_MSG << "\r\n";
//
//	cout << "Please select an option : ";
//}
//
//int checkOption(int option)
//{
//	switch (option)
//	{
//	case OPTION_ONE:
//		printOption(OPTION_ONE_MSG);
//		return 1;
//		break;
//
//	case 2:
//		cout << SELECTION_MSG << OPTION_TWO_MSG << "\r\n";
//		return 1;
//		break;
//
//	case 3:
//		cout << SELECTION_MSG << OPTION_THREE_MSG << "\r\n";
//		return 1;
//		break;
//
//	case 4:
//		cout << SELECTION_MSG << OPTION_FOUR << "\r\n";
//		return 1;
//		break;
//
//	case 5:
//		cout << SELECTION << OPTION_FIVE << "\r\n";
//		return 1;
//		break;
//
//	case 6:
//		cout << SELECTION << OPTION_SIX << "\r\n";
//		break;
//
//	case 0:
//		cout << SELECTION << OPTION_ZERO << "\r\n";
//		cout << "\r\n" << "Quitting Menu..." << "\r\n";
//		return 0;
//		break;
//
//	default:
//		cout << "\r\n" ERROR_MESSAGE << "\r\n";
//	}
//
//	return 0;
//}
//
//void printOption(const optionMessage)
//{
// cout << SELECTION << optionMessage << "\r\n";
//
//}
