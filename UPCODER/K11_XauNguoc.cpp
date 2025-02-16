#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = s.size()-1; i >= 0; i--)
        cout << s[i];

    return 0;
}