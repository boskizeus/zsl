#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, rrrr;
};

class Worker{
	public:
		unsigned int id {};
		string name {}, surname {};
		Date dateBirthday {};

		void showAllData();
		void setId(unsigned int x, string name1, string surname1, unsigned short int dd1, unsigned short int mm1, unsigned short int rrrr1){
			id=x;
			name=name1;
			surname=surname1;
			dateBirthday.dd = dd1;
			dateBirthday.mm = mm1;
			dateBirthday.rrrr = rrrr1;
		}
};

	void Worker::showAllData(){
		cout << "Dane pracownika:\n" << "Id: " << id
				 << "\nImię i nazwisko: " << name << " " << surname
				 << "\nData urodzenia: " << dateBirthday.dd << "-"
				 << dateBirthday.mm << "-"
				 << dateBirthday.rrrr << "r.\n\n";
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.setId(100, "Janusz", "Nowak", 16, 9, 2021);
	pracownik.showAllData();

	return 0;
}
