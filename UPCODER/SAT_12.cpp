#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    
    while (n--) {
        cin >> s;
        string x = s;
        reverse(s.begin(), s.end());
        cout << (x == s ? "YES\n" : "NO\n");
    }
    
    return 0;
}