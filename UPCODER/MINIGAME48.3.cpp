#include <bits/stdc++.h>
using namespace std;

string s;
map<int, int> mp;
int n, m, ans, sum[1005];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    while (n--) {
        cin >> m >> s;
    
        for (int i = 1; i <= m; i++) 
            sum[i] = sum[i-1] + (s[i-1] - '0');
        
        mp[0] = 1; 
        ans = 0;
        
        for (int i = 1; i <= m; i++) {
            ans += mp[sum[i] - i];
            mp[sum[i] - i]++;
        }
        
        cout << ans << '\n';
        mp.clear();
    };
    
    return 0;
}