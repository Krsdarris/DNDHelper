//includes
#include <string.h>;
#include <ctype.h>;
#include <stdlib.h>;
#include <iostream>;
#include <sstream>;
#include <vector>;
#include <limits>;

//forward declerations
void printMenu();
void errorMessage();
int intValidation(std::string);
char charValidation(std::string);


int main()
{
	std::string userInput;
	int selection = 0;
	std::cout << "Hello user This DND helper program is made to assist you in calculatint the different formulaes associated with DND";
	printMenu();

	do {
		std::cin >> userInput;
		selection = intValidation(userInput);

		switch (selection)
		{
		case 1:
			system("cls");
			std::cout << "currently under construction\n";
			system("pause");
			break;
		case 2:
			system("cls");
			std::cout << "currently under construction\n";
			system("pause");
			break;
		case 3:
			system("cls");
			std::cout << "currently under construction\n";
			system("pause");
			break;
		case 4:
			system("cls");
			std::cout << "thank you for using this program come again soon\n";
			system("pause");
			break;
		default:
			errorMessage();
		}
	} while (selection != 4);
	

	return 0;
}

//function that just prints our menu to the console
void printMenu()
{
	std::cout << "to select an option press the number associated with your choice\n";
	std::cout << "----------------------------------------------------------------\n";
	std::cout << "1. Health calculator\n";
	std::cout << "2. Damage calculator\n";
	std::cout << "3. class builder\n";
	std::cout << "4. Exit\n";
}

//function that will print out an input error message and ask the user to try again
void errorMessage()
{
	system("cls");
	std::cout << "that was not a proper input try again\n";
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	printMenu();
}

//function will check the first letter or number in the input string and validate if it's a number or not
//if it's a number it will add it to a vector and then when the vector is complet it will convert it to an interger
int intValidation(std::string string)
{
	int errorCheck = 1;
	for (int i = 0; i < string.length(); ++i)
	{
		if (isdigit(string[i]));
		else
		{
			errorCheck = 0;
			break;
		}
	}
	if (errorCheck == 0) return errorCheck;
	else return std::stoi(string);
}
