#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (s1.size() == s2.size()) 
        cout << "Hai xau dai bang nhau";
    else 
        cout << (s1.size() > s2.size() ? s1 : s2);

    return 0;
}