#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, k, a[MAXN];
map<int, int> m;
int cnt, ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int l = 1, r = 1;
    while (l <= n && r <= n) {
        if (++m[a[r]] == 1) cnt++; 

        while (cnt > k) {
            if (m[a[l]] == 1) cnt--;
            m[a[l]]--;
            l++;
        }

        ans += (r - l + 1);
        r++;
    }

    cout << ans;
    return 0;
}