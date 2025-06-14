#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e5 + 5;

int n, k, t, ans;
int a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)  
        cin >> a[i];
        
    t = a[1];
    ans = k + 1;
    
    for (int i = 2; i <= n; i++) {
        if (a[i] - t <= k) 
            ans += a[i] - t;
        else 
            ans += k + 1;
        t = a[i];
    }
   
    cout << ans;
    return 0;
}