#include <iostream>
using namespace std;

class School {
	public:
		static string s_school;
		static string s_jobPosition;
		
		static string s_getSchool();
		
		static void s_setSchool(string pSchool) {
			s_school=pSchool;
		};
	
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
	
	string School::s_getSchool(){
		return s_school;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
//	cout<<School::s_jobPosition<<endl;
	School::s_jobPosition="kierownik";
	
	School kowalski;
	kowalski.setNameSurname("Janusz", "Kowalski");
	kowalski.getData();
	kowalski.s_jobPosition="wyk³adowca";
	kowalski.getData();
	
	cout<<"Szko³a: "<<School::s_school<<endl;
	
	School::s_setSchool("CDV");
	cout<<"Szko³a: "<<School::s_school<<endl;
	
	return 0;
}
