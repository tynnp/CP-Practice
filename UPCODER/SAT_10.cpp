#include <bits/stdc++.h>
using namespace std;

bool dx(string n) {
    string m = n;
    reverse(n.begin(), n.end());
    return n == m;
}

string s;

int main() {
    while (cin >> s) {
        cout << (dx(s) ? "YES" : "NO") << ' ';
    }
    return 0;
}