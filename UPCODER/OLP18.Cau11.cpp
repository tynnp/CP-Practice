#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 105;

int n, m, ans;
int a[MAXN];

int32_t main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
        
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int x = a[i] + a[j] + a[k];
                if (x <= m) ans = max(ans, x);
            }
        }
    }
    
    cout << ans;
    return 0;
}