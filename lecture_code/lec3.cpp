#include <iostream>
#include <cstring>

using namespace std;

int main() {
        /*
        double d = 3.1416;
	char ch = * (char*) &d;
	*/
	/*
	short s = 45;
	double d = *(double*) &s;
	*/

	// structs 
	/*
	struct fraction {
	int num;
	int denum;
	};
	fraction pi;
	pi.num = 22;
	pi.denum = 7;
	((fraction*)&(pi.denum))->num = 12;
	((fraction*)&(pi.denum))->denum = 33;
	*/

	// array
	/*
	int array[10];
	array[0] = 44;
	array[9] = 100;
	array[5] = 45;
	array[10] = 1;
	array[25] = 25;
	array[-4] = 27;
	
	cout << array[5] << *(array+5) << endl;
	*/
	
	/*
	int arr[5];
	arr[3] = 2;
	((short*)arr)[7] = 1;
	cout << arr[3] << endl; // notice little median in unix

	((short*)((char*)(&arr[1]) + 8))[3] = 100;
	cout << arr[4] << endl;
	*/

	// struct
	struct student {
	char *name;
	char suid[8];
	int numUnits;
	};

	student pupils[4];
	pupils[0].numUnits = 21;
	pupils[2].name = strdup("Atom"); // strdup: dynamic allocate space for "Atom\0", return the address of A
	pupils[3].name = pupils[0].suid + 6;
	strcpy(pupils[1].suid, "40415xx");
	strcpy(pupils[3].name, "123456");
	cout << pupils[0].numUnits << endl;
	pupils[7].suid[11] = 'A';
	cout << pupils[7].numUnits << endl;
	
	
	return 0;

}

