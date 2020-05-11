#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   ifstream input;
   input.open(argv[1]);
   string line;
   while (getline(input, line)) {
       cout << line << endl;
   }
   return 0;
}
