#include <iostream>

using namespace std;

class Worker{
	public:
		string name;
		string surname;
		string nationality="Polska";

//definicja metody showName
		void showName(){
			cout << "Twoje imi�: " << name;
		};
		
// deklaracja (prototyp) metody showSurname
		void showSurname();
		
		void showAllData();
};

//definicja metody showSurname
	void Worker::showSurname(){
		cout << "test metody showSurname";
	};
	
	void Worker::showAllData(){
		cout << "\n\nImi� i nazwisko: " << name << " " 
				 << surname << "\nNarodowo��: " << nationality;
	};
	
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker pracownik;
	pracownik.name="Krystyna";
	cout << "Narodowo��: " << pracownik.nationality;
	pracownik.nationality="USA";
	cout << "\nNarodowo��: " << pracownik.nationality << endl;
	pracownik.showName();
	pracownik.showSurname();
	pracownik.showAllData();
	
	return 0;
}
