#include <bits/stdc++.h>
using namespace std;

int n, k;
string s, ans("");

void Try(int x, int idx) {
    if (x == k && idx < n) {
        cout << ans << endl; 
        return;
    }
    
    for (int i = idx; i < n; i++) {
        ans += s[i];
        x += 1;
        
        Try(x, i);
        
        ans.pop_back();
        x -= 1;
    }
}

int32_t main() {
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
    //cout << s << endl;

    for (int i = 0; i < s.size(); i++) {
        //cout << s[i] << endl;
        ans += s[i];
        Try(1, i);
        ans.pop_back();
    }
    
    return 0;
}