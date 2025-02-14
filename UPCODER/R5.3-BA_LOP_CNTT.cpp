#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

int64_t n, x, ans;
int64_t a[MAXN], b[MAXN], c[MAXN];

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }
        
    for (int i = 0; i < n; i++) {
        cin >> x;
        b[x]++;
    }
        
    for (int i = 0; i < n; i++) {
        cin >> x;
        c[x]++;
    }
    
    for (int i = 1; i <= MAXN; i++)
        ans += a[i] * b[i] * c[i];
    
    cout << ans;
    return 0;
}