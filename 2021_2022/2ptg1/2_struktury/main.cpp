#include <iostream>
using namespace std;

struct Date {
	unsigned short int d, m, rrrr;
};

struct Student {
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student student {"Katarzyna", "Nowak", 100, {6, 9, 2021}, {2, 3, 4, 5, 4}};
	cout << "Imi� i nazwisko: " << student.name << " " 
			 << student.surname << "\nId: " << student.id 
			 << "\nData urodzenia: " 
			 << student.dateBirthday.d << "-" << student.dateBirthday.m
			 << "-" << student.dateBirthday.rrrr << "r." 
			 << "\n\nOceny z informatyki: " 
			 << "\n1 ocena: " << student.gradeInformatics[0] << endl 
			 << "\n2 ocena: " << student.gradeInformatics[1] << endl 
			 << "\n3 ocena: " << student.gradeInformatics[2] << endl 
			 << "\n4 ocena: " << student.gradeInformatics[3] << endl 
			 << "\n5 ocena: " << student.gradeInformatics[4] << endl << endl;
			 
	return 0;
}
