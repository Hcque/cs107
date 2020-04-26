#include <iostream>
#include <cstring>
using namespace std;
/*
void swap(int *ap, int *bp) {
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}
*/

void swap(void *vp1, void *vp2, int size) {
	char buffer[size];
	memcpy(buffer, vp1, size); // generic copythings from vp1Addr to bufferAddr 
	memcpy(vp1, vp2, size);
	memcpy(vp2, buffer, size);
}

int lsearch(int key, int array[], int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] == key) { // bit-wise equal
			return i;
		}
	}
	return -1;
}

int main() {
	int x = 7;
	int y = 117;
	swap(&x, &y, sizeof(int));
	cout << "x is " << x << " y is " << y << endl;

	double d = 3.1415, e = 2.712;
	swap(&d, &e, sizeof(double));
	cout << d << " " << e << endl;

	int i = 44;
	short s = 5;
	swap(&i, &s, sizeof(short)); // just coincidence
	cout << i << " " << s << endl;

	char *husband = strdup("Fred");
	char *wife = strdup("Wilma");
	swap(&husband, &wife, sizeof(char*));
	cout << (*husband) << " " << (*wife) << endl;


}

