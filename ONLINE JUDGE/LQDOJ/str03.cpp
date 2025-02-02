#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (char &c : s)
        c = tolower(c);
    cout << s;
    return 0;
}