#include <stdio.h>
#include <string.h>
/*
int lsearch(int key, int array[], int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] == key) { // bit-wise equal
			return i;
		}
	}
	return -1;
}
*/



void* lsearch(void* key, void* base, int n, int elemSize) {
	for (int i = 0; i < n; i++) {
		void *elemAddr = (char*)base + i*elemSize;
		if (memcmp(key, elemAddr, elemSize) == 0){
			return elemAddr;
		}
	}
	return NULL;
}

	

//void* lsearch(void* key, void* base, int n, int elemSize, int (*cmpFn)(void*, void*)){
//	for (int i = 0; i < n; i++) {
//		void* elemAddr = (char*)base + i*elemSize;
//		if (cmpFn(key, elemAddr)) {
//			return elemAddr;
//		}
//	}
//	return NULL;
//}
// I am the client 
int IntCmp(void *elem1, void *elem2) {
	int *ip1 = elem1;
	int *ip2 = elem2;
	return *ip1 == *ip2;
}
// summary: not perfect, other language learn the lesson

int StrCmp(void *vp1, void *vp2) {
	char *s1 = *(char**)vp1;
	char *s2 = *(char**)vp2;
	return s1 == s2;
}

int main() {
        int arr[5] = {1,2,3,4,5};
        int keynum = 3;
        int* key = &keynum;
        printf("")
        //int ans = lsearch(key, arr, 5, sizeof(int));

	int array[] = {4,2,3,7,11,6};
	int size = 6;
	int number = 7;
//	int* found = lsearch(&number, array, size, sizeof(int), IntCmp);
	
//	// EX. char* in array
//	char *notes[] = {"Ab", "F#", "B", "Gb", "D"};
//	char *favoriteNote = "Eb";
//	char **found = lsearch(&favoriteNote, notes, 5, sizeof(char*), StrCmp);
	




}

