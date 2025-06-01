#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 1e5 + 4;

int n, ans;
int a[MAXN], b[MAXN], c[MAXN];
int dpA[MAXN], dpB[MAXN], dpC[MAXN];

int32_t main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i] >> c[i];

    for (int i = 1; i <= n; i++) {
       dpA[i] = a[i] + max(dpB[i-1], dpC[i-1]);
       dpB[i] = b[i] + max(dpA[i-1], dpC[i-1]);
       dpC[i] = c[i] + max(dpB[i-1], dpA[i-1]);
    }   

    cout << max({dpA[n], dpB[n], dpC[n]});
    return 0;
}