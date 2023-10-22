#include <iostream>
#include "loading.h"
#include <Windows.h>

using namespace std;

void loadingBar() {
	system("cls");
	system("color 9F");
	cout << "\n\t\t\t\t\tStudent Management System";
	cout << "\n\t\t\t\t\tDeveloped By Matei Popescu";

	char a = 177, b = 219;
	cout << "\n\n\n\t\t\t\t\tLoading...";
	cout << endl;
	cout << "\t\t\t\t\t";

	for (int i = 0; i < 26; i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t\t";
	for (int i = 0; i < 26; i++) {
		cout << b;
		Sleep(200);
	}

	//cout << endl << endl << a << endl << b;
}