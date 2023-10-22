void loadingBar();
void passwordVerification();
void checkAccountType();
void studentMenu();
void readCREDENTIALS();
void teacherMenu();

using namespace std;

class User {
public:
	string username;
	string password;
	char type;

	User() {
		username;
		password;
		type;
	}

	User(string uN, string pW, char tP) {
		username = uN;
		password = pW;
		type = tP;
	}

};

class Student {
public:
	string username;
	string password;
	string nume;
	string prenume;
	float medieInformatica;
	int medieRomana;
	int medieEngleza;
	int medieMatematica;
	int medieIstorie;
	int medieGeografie;
	int medieEconomie;
	int medieSport;
	string clasa;

	Student() {

	}

};

class Teacher {
public:
	string username;
	string password;
	string nume;
	string prenume;
	string materie;
};