#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    while (ss >> s) cnt++;
    
    if (cnt) cout << cnt;
    return 0;
}