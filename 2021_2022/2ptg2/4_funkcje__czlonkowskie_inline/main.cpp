#include <iostream>
#include <cmath>
using namespace std;

class Room {
	public:
		float length, width;
		
		inline int intLength(){
			return round(length);
		}
		
		inline int intWidth(){
			return round(width);
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Room pokoj;
	pokoj.length=3.4;
	pokoj.width=5.5;
	
	cout<<"Długość pokoju: "<<pokoj.length
			<<"m\nDługość pokoju po zaokrągleniu: "
			<<pokoj.intLength()<<"m\n\nSzerokość pokoju: "
			<<pokoj.width<<"m\nSzerokość pokoju po zaokrągleniu: "
			<<pokoj.intWidth()<<"m\n\n";
	
	return 0;
}
