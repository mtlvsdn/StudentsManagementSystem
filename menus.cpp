#include <iostream>
#include "loading.h"
#include <string>
#include <fstream>

extern User userPerson;
extern Student userStudent;
extern Teacher userTeacher;

using namespace std;

void studentMenu() {
	cout << "\n\t\t\t\t\tStudent Record Management System";
	cout << endl << endl << "\t\t\t\t\tWelcome back " << userPerson.username << "!";
	cout << endl << "\t1. See General Grade";
	cout << endl << "\t2. See List of Subjects";
	cout << endl << "\t3. LOGOUT";
	//cout << endl << "\n\t" << userPerson.username << ": ";

	int taskNumber, count, number;
	float averageGrade;
	string userName;
	string garbageBin;
	string firstName;
	string lastName;

	//cin >> taskNumber;
	ifstream studentsData("studentsData.csv");
	//ofstream outputData("studentsData.csv");
	while (true) {
		cout << endl << "\n\t" << userPerson.username << ": ";
		cin >> taskNumber;
		studentsData.seekg(0, ios::beg);
		studentsData >> userName;

		while (userName != userPerson.username) {
			studentsData >> userName;
			//cout << userName << endl;
		}

		studentsData >> firstName;
		studentsData >> lastName;

		//TASK #1
		if (taskNumber == 1) {
			
			//SET POSITION IN THE FILE BACK TO THE GENERAL AVEARGE
			//int startPosition = studentsData.tellg();

			averageGrade = 0;
			for (count = 1; count <= 8; count++) {
				studentsData >> number;
				averageGrade = averageGrade + number;
			}
			averageGrade /= count;
			cout << endl << "\t" << "Your general grade is: " << averageGrade;
			//studentsData.seekg(startPosition);
			//outputData << averageGrade;
		}
		else if (taskNumber == 2) {
			cout << endl << "\t" << "STUDENT: " << lastName << " " << firstName;
			studentsData >> userStudent.medieInformatica;
			studentsData >> userStudent.medieRomana;
			studentsData >> userStudent.medieEngleza;
			studentsData >> userStudent.medieMatematica;
			studentsData >> userStudent.medieIstorie;
			studentsData >> userStudent.medieGeografie;
			studentsData >> userStudent.medieEconomie;
			studentsData >> userStudent.medieSport;
			studentsData >> userStudent.clasa;
			cout << endl << "\t" << "Informatica: " << userStudent.medieInformatica;
			cout << endl << "\t" << "Romana: " << userStudent.medieRomana;
			cout << endl << "\t" << "Engleza: " << userStudent.medieEngleza;
			cout << endl << "\t" << "Matematica: " << userStudent.medieMatematica;
			cout << endl << "\t" << "Istorie: " << userStudent.medieIstorie;
			cout << endl << "\t" << "Geografie: " << userStudent.medieGeografie;
			cout << endl << "\t" << "Economie: " << userStudent.medieEconomie;
			cout << endl << "\t" << "Sport: " << userStudent.medieSport;
			cout << endl << "\t" << "Clasa din care face parte: " << userStudent.clasa;
		}
		else if (taskNumber == 3) {
			passwordVerification();
			readCREDENTIALS();
			checkAccountType();
		}
	}
}

void teacherMenu() {
	cout << "\n\t\t\t\t\tStudent Record Management System";
	cout << endl << endl << "\t\t\t\t\tWelcome back " << userPerson.username << "!";
	cout << endl << "\t1. Select Student";
	cout << endl << "\t2. Change Password";
	cout << endl << "\t3. LOGOUT";
	cout << endl;

	int taskNumber;

	while (true) {
		cout << endl << "\n\t" << userPerson.username << ": ";
		cin >> taskNumber;
		ifstream studentsData("studentsData.csv");

		string userName;
		string garbageBin;
		string firstName;
		string lastName;

		studentsData.seekg(0, ios::beg);
		studentsData >> userName;

		while (userName != userPerson.username) {
			studentsData >> userName;
			//cout << userName << endl;
		}

		studentsData >> firstName;
		studentsData >> lastName;


	}
}