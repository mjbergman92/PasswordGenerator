#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;
int main() {

	int passwordType;
	int passwordLength;
	string options[] = { "Lowercase Letters\t\t\t\t\t", "Lowercase and Numbers\t\t\t\t", "Lowercase, Uppercase, & Numbers\t\t\t", "Lowercase, Uppercase, Numbers, & Punctuaction\t", "Quit\t\t\t\t\t\t" };


	srand(time(NULL));

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

	cout << endl << "Click Enter" << endl;
	
	while (true) {

		do {
			
			do {

				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Password Type (choose from above): ";
				cin >> passwordType;

			} while (cin.fail());
			

		} while (passwordType < 1 || passwordType > 5);

		do {

			bool flag;

			do {

				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Password Length (6 to 14 characters): ";
				cin >> passwordLength;

				flag = cin.fail();
				cout << flag;


			} while (flag);

		} while (passwordLength < 6 || passwordLength > 14);

		cout << endl << "Hello People";

		switch (passwordType) {

		case 1:

			cout << "Generated Password: ";

			for (int i = 0; i < passwordLength; i = i++) {

				int chosenNumber = rand() % 26 + 97;
				char chosenCharacter = static_cast<char>(chosenNumber);
				cout << chosenCharacter;

			}

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;

		}

	}

	system("pause");

	return 0;

}
