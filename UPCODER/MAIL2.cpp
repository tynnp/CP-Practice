#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool found;

    while (cin >> s) {
        if (found) 
            cout << ",\n";
        cout << s;
        found = true;
    }

    cout << '.';
    return 0;
}