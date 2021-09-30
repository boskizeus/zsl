#include <iostream>
using namespace std;

class School {
	public:
		static string s_school;
		static string s_jobPosition;
	
	public: 
		string name;
		string surname;
		
		void getData();
		void setNameSurname(string name, string surname);
};

	string School::s_school="ZS£";
	string School::s_jobPosition="student";
	
	void School::getData(){
		cout<<"Imiê i nazwisko: "<<name<<" "<<surname
		    <<"\nSzko³a: "<<s_school
				<<"\nStanowisko w pracy: "<<s_jobPosition<<endl<<endl;
	};
	
	void School::setNameSurname(string name, string surname){
		School::name=name;
		School::surname=surname;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	School kowalski;
	kowalski.setNameSurname("Janusz", "Kowalski");
	kowalski.getData();
	kowalski.s_jobPosition="wyk³adowca";
	kowalski.getData();
	return 0;
}
