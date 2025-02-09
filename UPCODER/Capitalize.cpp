#include <iostream>
using namespace std;

int main() {
    string s; 
    getline(cin, s);

    for (char &c : s)
        c = toupper(c);

    cout << c;
    return 0;
}