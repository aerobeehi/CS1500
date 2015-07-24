#include <iostream>
#include <string>

#define OPTION_ONE    "Login"
#define OPTION_TWO    "Register"
#define OPTION_THREE  "Login as Guest"
#define	OPTION_ZERO   "Quit"
#define ERROR_MESSAGE "Incorrect option. Please try again."
#define USER_NAME     "Username: "
#define PASSWORD      "Password: "
#define VERIFY_PASSWORD      "Verify Password: "

void firstMenu();
void registerUser();
void login();
int checkOption(int userInput);



using namespace std;

int main()
{
	int userInput;

	do
	{
		firstMenu();
		cin >> userInput;
		checkOption(userInput);
	} while (userInput != 0);

	return 0;
}

void firstMenu()
{
	cout << "*----------------------------*" << "\n";
	cout << "[1] " << OPTION_ONE << "\n";
	cout << "[2] " << OPTION_TWO << "\n";
	cout << "[3] " << OPTION_THREE << "\n";
	cout << "[0] " << OPTION_ZERO << "\r\n";

	cout << "Please select an option : ";
}

int checkOption(int option)
{
	switch (option)
	{
	case 1:
		cout << "\n -- " << OPTION_ONE << " -- \n";
		login();
		return 1;
		break;

	case 2:
		cout << "\n -- " << OPTION_TWO << " -- \n";
		registerUser();
		return 1;
		break;

	case 3:
		cout << "\n -- " << OPTION_THREE << " -- \n";
		return 1;
		break;

	case 0:
		cout << "\n -- " << OPTION_ZERO << " -- \n";
		cout << "\r\n" << "Quitting Menu..." << "\n";
		return 0;
		break;

	default:
		cout << "\r\n" ERROR_MESSAGE << "\r\n";
	}

	return 0;
}

void registerUser()
{
//	bool passwordMatch;
	string userName;
	string firstPassword;
	string secondPassword;

	cout << "\n" << USER_NAME;
	cin >> userName;

	cout << PASSWORD;
	cin >> firstPassword;

	cout << VERIFY_PASSWORD;
	cin >> secondPassword;

//	passwordMatch = verifyPassword(firstPassword, secondPassword);
}

