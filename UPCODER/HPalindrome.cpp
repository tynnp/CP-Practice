#include <bits/stdc++.h>
using namespace std;

bool check(string &s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++)
        if (s[i] != s[n-i-1])
            return false;
    return true;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    
    while (getline(cin, s)) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        cout << check(s) << '\n';
    }

    return 0;
}