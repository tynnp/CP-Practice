#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAXN 100005

int t;
int n, a[MAXN];

void solve() {
    cin >> n;

    int maxVal = 0;  
    int maxVal2 = LLONG_MIN;
    int sum = 0; 
    int maxE = LLONG_MIN;  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) 
            maxVal += a[i];  
        maxE = max(maxE, a[i]); 

        sum += a[i];
        maxVal2 = max(maxVal2, sum);
        if (sum < 0) 
            sum = 0;
    }

    if (maxVal == 0) 
        maxVal = maxE;

    cout << maxVal << ' ' <<  maxVal2 << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) solve();
    
    return 0;
}
