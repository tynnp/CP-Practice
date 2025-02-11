#include <bits/stdc++.h>
using namespace std;

int n, num;
string s[11];

bool check() {
    for (int i = 0; i < n; i++) {
        int x = stoi(s[i], nullptr, 2);
        if (num == x) return true;
    }

    return false;
}

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    while (ss >> s[n]) n++;
    cin >> num;

    cout << (check() ? "YES" : "NO");
    return 0;
}