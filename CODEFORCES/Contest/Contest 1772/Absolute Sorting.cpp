#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int t, n, a[MAXN], L, R;

int ceild(int a, int b) {
    return (a + (b - 1)) / b;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        L = INT32_MIN; 
        R = INT32_MAX;
        cin >> n;
        
        for (int i = 1; i <= n; i++)
            cin >> a[i];
            
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i+1])
                R = min(R, (a[i] + a[i+1]) / 2);
            else if (a[i] > a[i+1])
                L = max(L,ceild(a[i] + a[i+1], 2));
        }
        
        int x = max(L, 0);
        cout << (L <= R ? x : -1) << '\n';
    }
    
    return 0;
}