#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
int cnt[300], f[MAXN], inv[MAXN];
string s;

int pow(int a, int b, int c) {
    int res = 1;
    a %= c;
    
    while (b) {
        if (b & 1) res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;
    
    for (char c : s) cnt[c]++;
    
    f[0] = inv[0] = 1;
    for (int i = 1; i < MAXN; i++)
        f[i] = i * f[i - 1] % MOD;
    
    inv[MAXN - 1] = pow(f[MAXN - 1], MOD - 2, MOD);
    for (int i = MAXN - 2; i >= 1; i--)
        inv[i] = inv[i + 1] * (i + 1) % MOD;
        
    int ans = f[s.size()];
    for (int i = 'a'; i <= 'z'; i++)
        if (cnt[i])
            ans = (ans * inv[cnt[i]]) % MOD;
    
    cout << ans;
    return 0;
}