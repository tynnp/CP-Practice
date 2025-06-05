#include <bits/stdc++.h>
using namespace std;

string s;
int cnt, ans, a[300];
bool odd;

int main() {
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    cin >> s;
    for (char c : s) a[c]++;
    
    for (int x : a) {
        cnt = x;
        
        if (x & 1) {
            ans += cnt - 1;
            odd = true;
        } else {
            ans += cnt;
        }
    }
    
    ans += odd;
    cout << ans;
    return 0;
}