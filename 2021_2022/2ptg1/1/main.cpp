#include <iostream>
using namespace std;

class Test{
	public:
		int a;
};

class Worker{
	public:
		string name;
		string surname;
		string nationality;
		unsigned short int yearBirthday;
		float height;
		char gender;
		
		void showNameSurname(){
			cout << "Imi� i nazwisko: " << name << " " << surname;
		};
		
//deklaracja (prototyp) metody showAllData
		void showAllData();
};

void Worker::showAllData(){
	string genderDescription;
	switch(gender){
		case 'm':
			genderDescription = "M�czyzna";
			break;	
		case 'w':
			genderDescription = "Kobieta";	
			break;
		default:
			genderDescription = "-";
	}
	
	cout << "\n\nImi� i nazwisko: " << name << " " << surname << "\n" 
			 << "Narodowo��: " << nationality << ", rok urodzenia: " 
			 << yearBirthday << "\nWzrost: " << height << ", p�e�: " 
			 << genderDescription << endl;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Test newObject;
//	cout << newObject.a;
	
	Worker pracownik;
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.yearBirthday=1998;
	pracownik.height=180;
	pracownik.gender='w';
	cout << pracownik.name << endl << endl;
	pracownik.showNameSurname();
	pracownik.showAllData();
	
	return 0;
}
