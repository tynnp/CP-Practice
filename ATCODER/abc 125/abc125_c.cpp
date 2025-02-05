#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAXN 100005

int n, ans;
int a[MAXN], bf[MAXN], at[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    bf[0] = 0;
    for (int i = 1; i <= n; i++)
        bf[i] = __gcd(bf[i-1], a[i]);
        
    // for (int i = 0; i <= n; i++)
    //     cout << bf[i] << ' ';
    // cout << endl;
        
    at[n + 1] = 0;
    for (int i = n; i >= 1; i--)
        at[i] = __gcd(at[i+1], a[i]);
        
    // for (int i = 0; i <= n; i++)
    //     cout << at[i] << ' ';
    // cout << endl;
    
    for (int i = 1; i <= n; i++)
        ans = max(ans, __gcd(bf[i-1], at[i+1]));
    
    cout << ans;
    return 0;
}