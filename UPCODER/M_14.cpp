#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
int n, ans, a[MAXN], p[MAXN];

int pow(int a, int b, int c) {
    int res = 1;
    a %= c;
    
    while (b) {
        if (b & 1) 
            res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    
    return res;
} 

int calc(int n) {
    for (int i = 2; i*i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            n /= i;
            cnt++;
        }
        p[i] = max(p[i], cnt);
    }
    if (n > 1) p[n] = max(p[n], 1L);
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    for (int i = 1; i <= n; i++) {
        if (!a[i]) continue;
        int cnt = 0, k = i;
        
        while (a[k]) {
            int t = a[k];
            a[k] = 0;
            k = t;
            cnt++;
        }
        
        calc(cnt);
    }
    
    ans = 1;
    for (int i = 2; i < MAXN; i++)
        if (p[i]) 
            ans = ans * pow(i, p[i], MOD) % MOD;
       
    cout << ans; 
    return 0;
}