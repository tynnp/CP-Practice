#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ans = 0;
    
    cin >> s;
    for (char c : s) 
        ans += (c - '0');
    
    cout << ans;
    return 0;
}