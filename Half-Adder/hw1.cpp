#include<iostream>
#include "half-adder.h"

using namespace std;

int main(){

	HALF_ADDER half_adder;
	int x, y;

	cout << "X " << "Y " << "C " << "S" << endl;

	for(int i=1; i<=4; i++){
		if(i == 1) { x = 0; y = 0; }
		else if(i == 2) { x = 0; y = 1; }
		else if(i == 3) { x = 1; y = 0; }
		else if(i == 4) { x = 1; y = 1; }

		half_adder.setInput(x, y);

		cout << x << " " << y << " " << half_adder.getC() << " " << half_adder.getS() << " " << endl;
	}

	return 0;
}