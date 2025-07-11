#include <bits/stdc++.h>
using namespace std;

#define int long long 
const int MAXN = 2e5 + 5;
int n, k, a[MAXN];

bool check(int x) {
    int need = 0;
    for (int i = (n - 1) >> 1; i < n; i++) 
        need += max(0LL, x - a[i]);
    return need <= k;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    sort(a, a + n);
    
    int l = 0, r = 2e9 + 5;
    
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    
    cout << l;
    return 0;
}