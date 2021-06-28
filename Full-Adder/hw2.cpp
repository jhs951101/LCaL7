#include<iostream>
#include "full-adder.h"

using namespace std;

int main(){

	FULL_ADDER full_adder;
	int x, y, z;

	cout << "X " << "Y " << "Z " << "C " << "S" << endl;

	for(int i=1; i<=8; i++){
		if(i == 1)      { x = 0; y = 0; z = 0; }
		else if(i == 2) { x = 0; y = 0; z = 1; }
		else if(i == 3) { x = 0; y = 1; z = 0; }
		else if(i == 4) { x = 0; y = 1; z = 1; }
		else if(i == 5) { x = 1; y = 0; z = 0; }
		else if(i == 6) { x = 1; y = 0; z = 1; }
		else if(i == 7) { x = 1; y = 1; z = 0; }
		else if(i == 8) { x = 1; y = 1; z = 1; }

		full_adder.setInput(x, y, z);

		cout << x << " " << y << " " << z << " " << full_adder.getC() << " " << full_adder.getS() << " " << endl;
	}

	return 0;
}