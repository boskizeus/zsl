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
	
	cout<<"D³ugoœæ pokoju: "<<pokoj.length
			<<"m\nD³ugoœæ pokoju po zaokr¹gleniu: "
			<<pokoj.intLength()<<"m\n\nSzerokoœæ pokoju: "
			<<pokoj.width<<"m\nSzerokoœæ pokoju po zaokr¹gleniu: "
			<<pokoj.intWidth()<<"m\n\n";
	
	return 0;
}
