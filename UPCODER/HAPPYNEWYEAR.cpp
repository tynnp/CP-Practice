#include <bits/stdc++.h>
using namespace std;

int t, cnt;
string s;

void solve() {
    cnt = 0;
    getline(cin, s);
    int idx = s.find("Happy new year 2017");

    while (idx != string::npos) {
        cnt++;
        idx = s.find("Happy new year 2017", idx + 1);
    } 
    
    cout << cnt << endl;
}

int main() {
    cin >> t;
    cin.ignore();
    while (t--)
        solve();
    return 0;
}