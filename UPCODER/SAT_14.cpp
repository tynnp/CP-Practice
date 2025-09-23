#include <bits/stdc++.h>
using namespace std;

int cnt(string s) {
    int res = 0;
    string t;
    stringstream ss(s);
    while (ss >> t) res++;
    return res;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    
    while (n--) {
        getline(cin, s);
        cout << cnt(s) << '\n';
    }
    
    return 0;
}