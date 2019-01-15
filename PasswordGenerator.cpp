#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;
int main() {

	int passwordType;		//the choice of password, from 1 to 5, to be input from the user
	int passwordLength;		//the choice of length of the password, from 6 to 14, to be input from the user
	string options[] = { "Lowercase Letters\t\t\t\t\t", "Lowercase and Numbers\t\t\t\t", "Lowercase, Uppercase, & Numbers\t\t\t", "Lowercase, Uppercase, Numbers, & Punctuaction\t", "Quit\t\t\t\t\t\t" };
	bool running = true;	//will be used to stop the generation process when the fifth option is chosen

	srand(time(NULL));		//bases the random number of of time

	/* 
	The following for loops are for displaying the
	options for the password generator
	*/

	for (int i = 0; i < 65; i++) {

		cout << "*";

	}

	cout << endl;

	for (int i = 0; i < 5; i++) {

		cout << "*\t[ " << i + 1 << " ] " << options[i];
		cout << "*" << endl;

	}

	for (int i = 0; i < 65; i++) {

		cout << "*";

	}

	//The user must click enter. It is to continue to enter the password generator information
	cout << endl << "Click Enter" << endl;
	
	//while the 5 option has not been chosen
	while (running) {

		//input the passwordType while it isn't an integer and is less than 1 or greater than 5
		do {
			
			do {

				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Password Type (choose from above): ";
				cin >> passwordType;

			} while (cin.fail());
			

		} while (passwordType < 1 || passwordType > 5);

		//if the password generated
		if (passwordType != 5) {

			do {

				do {

					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "Password Length (6 to 14 characters): ";
					cin >> passwordLength;

				} while (cin.fail());

			} while (passwordLength < 6 || passwordLength > 14);

		}

		cout << endl;

		switch (passwordType) {

		//lowercase letters
		case 1:

			cout << "Generated Password: ";

			//create the amount of characters that the user wants in his/her generated password
			for (int i = 0; i < passwordLength; i = i++) {

				int chosenNumber = rand() % 26 + 97;
				char chosenCharacter = static_cast<char>(chosenNumber);
				cout << chosenCharacter;

			}

			cout << endl << endl;

			break;
		//lowercase and numbers
		case 2:

			cout << "Generated Password: ";

			//create the amount of characters that the user wants in his/her generated password
			for (int i = 0; i < passwordLength; i = i++) {

				int chosenNumber = rand() % 36;
				if (chosenNumber < 10) {

					chosenNumber += 48;

				}
				else {

					chosenNumber += -10 + 97;

				}
				char chosenCharacter = static_cast<char>(chosenNumber);
				cout << chosenCharacter;

			}

			cout << endl << endl;

			break;
		//lowercase, uppercase, and numbers
		case 3:

			cout << "Generated Password: ";

			//create the amount of characters that the user wants in his/her generated password
			for (int i = 0; i < passwordLength; i = i++) {

				int chosenNumber = rand() % 62;
				if (chosenNumber < 10) {

					chosenNumber += 48;

				}
				else if(chosenNumber < 36){

					chosenNumber += -10 + 65;

				}
				else {

					chosenNumber += -36 + 97;

				}
				char chosenCharacter = static_cast<char>(chosenNumber);
				cout << chosenCharacter;

			}

			cout << endl << endl;

			break;
		//lowercase, uppercase, numbers, and punctuation
		case 4:

			cout << "Generated Password: ";

			//create the amount of characters that the user wants in his/her generated password
			for (int i = 0; i < passwordLength; i = i++) {

				int chosenNumber = rand() % 81;
				if (chosenNumber < 7) {

					chosenNumber += 33;

				}
				else if (chosenNumber < 8) {

					chosenNumber += -7 + 42;

				}
				else if(chosenNumber < 11){

					chosenNumber += -8 + 44;

				}
				else if (chosenNumber < 23) {

					chosenNumber += -11 + 48;

				}
				else if (chosenNumber < 51) {

					chosenNumber += -23 + 63;

				}
				else if (chosenNumber < 80) {

					chosenNumber += -51 + 94;

				}
				else {

					chosenNumber += -80 + 126;

				}
				char chosenCharacter = static_cast<char>(chosenNumber);
				cout << chosenCharacter;

			}

			cout << endl << endl;

			break;
		//quit running the password generator
		case 5:

			cout << "Quitting Now..." << endl << endl;

			break;

		}

		//if the user chooses option 5, the program no longer runs the larger while loop
		if (passwordType == 5) {

			running = false;

		}

	}

	system("pause");

	return 0;

}
