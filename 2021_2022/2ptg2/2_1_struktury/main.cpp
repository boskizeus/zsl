#include <iostream>
using namespace std;

//definicja struktury 
struct DateBirthday{
//deklaracja p�l struktury
	unsigned short int dd, mm, yyyy;
};

//definicja klasy
class Student{
	public:
	// definicje w�a�ciwo�ci z ich inicjalizacj� zerow�
	int id {};
	string name {}, surname {};
  //deklaracja w�a�ciwo�ci typu strukturowego
	DateBirthday dateBirthday {};	
	void allShowData();
	void setData(int id, string name, string surname, DateBirthday dateBirthday);
}; 

	void Student::allShowData(){
		cout << "Id: " << id << "\nImi� i nazwisko: "
				 << name << " " << surname << endl
				 << "Data urodzenia: " << dateBirthday.dd << "-"
			   << dateBirthday.mm << "-" 
				 << dateBirthday.yyyy<<"r.";
	}
	
	void Student::setData(int id, string name, string surname, DateBirthday dateBirthday){
		Student::id=id;
		Student::name=name;
		Student::surname=surname;
		Student::dateBirthday=dateBirthday;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student uczen;
	
	unsigned short int dd, mm, yyyy;
	cout << "Podaj dat� urodzenia: \n";
	cout << "Dzie�: ";
	cin >> dd; 
	cout << "Miesi�c: ";
	cin >> mm;
	cout << "Rok: ";
	cin >> yyyy;

	uczen.setData(13, "Janusz", "Kowalski", {dd, mm, yyyy});
	uczen.allShowData();
	
	
	return 0;
}
