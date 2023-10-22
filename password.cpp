#include <iostream>
#include "loading.h"
#include <string>
#include <fstream>

extern User userPerson;

using namespace std;

void passwordVerification() {
	system("cls");
	int ok = 0;
	string usernameInput;
	string passwordInput;
	string firstName;
	string lastName;

	ifstream accountsFile("credentials.csv");
	string usernameStored = "";
	string passwordStored = "";
	char typeStored;

	while (ok == 0) {
		//INPUT USER AND PASSWORD
		cout << "\n\t\t\t\t\tUsername: ";
		cin >> usernameInput;
		cout << "\n\t\t\t\t\tPassword: ";
		cin >> passwordInput;
		;

		//getline(accountsFile, usernameStored);
		//getline(accountsFile, passwordStored);
		//accountsFile >> usernameStored;
		//accountsFile >> passwordStored;
		//accountsFile >> typeStored;

		//CHECK IF USER AND PASS EXISTS IN THE DATABASE
		while ((usernameStored != usernameInput && passwordStored != passwordInput) && !accountsFile.eof())
		{
			accountsFile >> usernameStored;
			accountsFile >> passwordStored;
			accountsFile >> typeStored;
			accountsFile >> firstName;
			accountsFile >> lastName;
			if (usernameStored == usernameInput && passwordStored == passwordInput) {
				ok = 1;
				break;
			}
			//cout << usernameStored << " " << passwordStored << endl;
		}
		//cout << "this is a message";
		system("cls");
		if (ok == 0) {
			cout << "Wrong user and/or password!";
		}
		accountsFile.seekg(0, ios::beg);
	}

	//OUTPUTS WELCOME MESSAGE
	//cout << "Welcome back " + firstName + " " + lastName + "!";
	accountsFile.close();

	//SAVE CREDENTIALS INTO A DIFFERENT FILE
	ofstream userCredentialsFile("userpasstype.csv");
	userCredentialsFile << usernameInput << " ";
	userCredentialsFile << passwordInput << " ";
	userCredentialsFile << typeStored << " ";
	userCredentialsFile.close();
}

void checkAccountType() {
	//cout << endl << userPerson.username;
	if (userPerson.type == 's') {
		studentMenu();
	}
	else if (userPerson.type == 't') {
		teacherMenu();
	}
	else {

	}

}