#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
	ifstream input("data/poem.g");
	string uselessText;
	string nonter;
	getline(input, uselessText,  '{');
	cout << uselessText << endl;
	input >> nonter;
	cout << "nonterminal: " <<  nonter << endl;
	getline(input, uselessText);
	string token;
	vector<vector<string>> prod;
	while (input.peek() != '}') {
		vector<string> v;
		int i = 0;
		while (true && i < 10) {
			i++;
			input >> token;
			if (token == ";") break;
			v.push_back(token);
			cout << "token:" << token << endl;
			getline(input, uselessText);
		}
		prod.push_back(v);
	}

	return 0;
}




