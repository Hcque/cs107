#include <iostream>
#include <cmath>

using namespace std;

int main() {
	char a = 'a';
	short a2 = 0b0000001000000111; // 519
	cout << a << a2 << "\n" << endl;

	//char ch = 'A';
	//short s = ch;
	//cout << s << endl;

	//short s = 67;
	//char ch = s;
	//cout << ch << endl;
	
	//short s = 0b0000010000001001; // 
	//int i = s;
	//cout << i << endl;
	
	//int i = pow(2,23) + pow(2, 20) + pow(2, 14) + 7;
	//short s = i;
	//cout << i << " " << s << endl;
	
	//short s = -1;
	//int i = s;
	//cout << i << endl;
	
	// now floats
	//int i = 5;
	//float f = i;
	//cout << f << endl;

	//int i = 37;
	//float f = *(float *) &i;
	//cout << f << endl;
	
	float f = 7.0;
	short s = * (short *) &f;
	cout << s << endl;
	
	char ch = '1';
	int test = ch;
	cout << "test: " << test << endl;

	return 0;
}

