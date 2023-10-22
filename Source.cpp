#include<iostream>
#include "loading.h"
#include <fstream>

User userPerson;
Student userStudent;

using namespace std;


void readCREDENTIALS() {
	string user1;
	string pass1;
	char type1;
	ifstream userCredentialsFile("userpasstype.csv");
	userCredentialsFile >> user1;
	userCredentialsFile >> pass1;
	userCredentialsFile >> type1;
	userPerson.username = user1;
	userPerson.password = pass1;
	userPerson.type = type1;
}

int main() {
	loadingBar();
	passwordVerification();
	/*string user1;
	string pass1;
	char type1;
	ifstream userCredentialsFile("userpasstype.csv");
	userCredentialsFile >> user1;
	userCredentialsFile >> pass1;
	userCredentialsFile >> type1;
	userPerson.username = user1;
	userPerson.password = pass1;
	userPerson.type = type1;*/
	//cout << userPerson.username << endl << userPerson.password << endl << userPerson.type;
	readCREDENTIALS();
	checkAccountType();
	system("pause>0");
}