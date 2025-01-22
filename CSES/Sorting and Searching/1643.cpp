#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAXN 200005

int n, ans;
int a[MAXN], sum[MAXN];

// int32_t main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     cin >> n;
    
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//         sum[i] = sum[i-1] + a[i];
//     }
    
//     int minVal = 0;
//     ans = INT_MIN;
    
//     for (int i = 1; i <= n; i++) {
//         ans = max(ans, sum[i] - minVal);
//         minVal = min(minVal, sum[i]);
//     }  
   
//     cout << ans;
//     return 0;
// }


int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
  
    int sum = 0;
    ans = INT_MIN;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum = max(a[i], sum + a[i]);
        ans = max(ans, sum);
    }
    
    cout << ans;
    return 0;
}