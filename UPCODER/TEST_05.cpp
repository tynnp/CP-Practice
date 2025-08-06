#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, k, a[MAXN], ans, cnt;
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    int i = 1, j = 1;
    while (i <= n && j <= n) {
        m[a[j]]++;
        if (m[a[j]] == 1) cnt++;
        
        while (cnt > k) {
            m[a[i]]--;
            if (m[a[i]] == 0) cnt--;
            i++;
        }
        
        ans += (j - i + 1);
        j++;
    }
    
    cout << ans;
    return 0;
}