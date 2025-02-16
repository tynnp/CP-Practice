#include <iostream>
using namespace std;

int main() {    
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int k = s1.find(s2);
    cout << (k != -1 ? k : 0);
    return 0;
}