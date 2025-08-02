#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t 

int n, x, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    x = 1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > x) break;
        x += a[i];
    }
   
    cout << x;
    return 0;
}