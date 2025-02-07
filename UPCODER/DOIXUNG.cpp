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
    int t;
    string s;

    cin >> t;
    cin.ignore();

    while (t--) {
        getline(cin, s);
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << check(s) << endl;
    }

    return 0;
}