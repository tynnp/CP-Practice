#include <bits/stdc++.h>
using namespace std;

string s;
int n, cnt, ans;
unordered_map<int, int> m;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> s;

    for (char c : s) m[c]++;
    cnt = m.size();

    m.clear();
    ans = INT_MAX;
    int l = 0, r = 0, k = 0;
    
    while (l < n && r < n) {
        if (++m[s[r]] == 1) k++;
        
        while (k >= cnt) {
            if (k == cnt) ans = min(ans, r - l + 1);
            if (m[s[l]] == 1) k--;
            m[s[l]]--;
            l++;
        }
        
        r++;
    }
    
    cout << ans;
    return 0;
}