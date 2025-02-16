#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    cin >> s2;
    s1 += s2;

    cout << s1;
    return 0;
}