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
	
	cout<<"D�ugo�� pokoju: "<<pokoj.length
			<<"m\nD�ugo�� pokoju po zaokr�gleniu: "
			<<pokoj.intLength()<<"m\n\nSzeroko�� pokoju: "
			<<pokoj.width<<"m\nSzeroko�� pokoju po zaokr�gleniu: "
			<<pokoj.intWidth()<<"m\n\n";
	
	return 0;
}
