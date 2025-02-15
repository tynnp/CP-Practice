#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (s1 == s2) 
        cout << "Hai xau bang nhau";
    else 
        cout << (s1 > s2 ? s1 : s2);

    return 0;
}