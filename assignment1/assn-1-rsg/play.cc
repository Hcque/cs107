#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["q"] = 1;
    m["w"] = 2;
    for (auto x: m) {
        cout << x.first << endl;
    }
    return 0;


}
