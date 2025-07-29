#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
int fact[MAXN], ifact[MAXN];
string s;
int f[300], ans;


int pow(int a, int b, int c) {
    a %= c;
    int res = 1;
    
    while (b) {
        if (b & 1)
            res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    fact[0] = ifact[0] = 1;
    for (int i = 1; i < MAXN; i++) 
        fact[i] = fact[i - 1] * i % MOD;
        
    ifact[MAXN - 1] = pow(fact[MAXN - 1], MOD - 2, MOD);
    for (int i = MAXN - 2; i >= 1; i--)
        ifact[i] = ifact[i + 1] * (i + 1) % MOD;
    
    cin >> s;
    for (char c : s) f[c]++;
    ans = fact[s.size()];
    
    for (int i = 'a'; i <= 'z'; i++)
        ans = ans * ifact[f[i]] % MOD;
    
    cout << ans;
    return 0;
}