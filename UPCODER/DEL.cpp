#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 1e6 + 5;

int n, odd, even;
int ans, sum, a[MAXN];

int32_t main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];

        if (a[i] & 1) odd++;
        else even++;
    }

    if (sum & 1)    
        ans = odd * even;
    else 
        ans = (even * (even - 1) >> 1) + (odd * (odd - 1) >> 1);

    cout << ans;
    return 0;
}