#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int t, n, cnt1, cnt2;
int a[MAXN];

int32_t main() {
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            
            if (a[i] == 1) {
                cnt1 += 1;
            } 
            
            else {
                cnt2 += 1;
                cnt1 += a[i] - 2;
            }
        }
        
        cout << cnt1 / 2 + cnt2 / 2 << endl;
        cnt1 = cnt2 = 0;
    }
    
    return 0;
}