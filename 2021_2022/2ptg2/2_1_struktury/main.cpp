#include <iostream>
using namespace std;

//definicja struktury 
struct DateBirthday{
//deklaracja pól struktury
	unsigned short int dd, mm, yyyy;
};

//definicja klasy
class Student{
	public:
	// definicje w³aœciwoœci z ich inicjalizacj¹ zerow¹
	int id {};
	string name {}, surname {};
  //deklaracja w³aœciwoœci typu strukturowego
	DateBirthday dateBirthday {};	
	void allShowData();
	void setData(int id, string name, string surname, DateBirthday dateBirthday);
}; 

	void Student::allShowData(){
		cout << "Id: " << id << "\nImiê i nazwisko: "
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
	cout << "Podaj datê urodzenia: \n";
	cout << "Dzieñ: ";
	cin >> dd; 
	cout << "Miesi¹c: ";
	cin >> mm;
	cout << "Rok: ";
	cin >> yyyy;

	uczen.setData(13, "Janusz", "Kowalski", {dd, mm, yyyy});
	uczen.allShowData();
	
	
	return 0;
}
