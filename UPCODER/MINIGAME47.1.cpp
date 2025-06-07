#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 1e9;
int a[1005];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m += a[i];
    }
     
    int idx, sum, cur;   
    for (int i = 0; i < n; i++) {
        idx = i;
        cur = m;
        sum = 0;
        
        for (int j = 1; j < n; j++) {
            cur -= a[idx % n];
            sum += cur;
            idx++;
        }
        
        ans = min(ans, sum);
    }
    
    cout << ans;
    return 0;
}