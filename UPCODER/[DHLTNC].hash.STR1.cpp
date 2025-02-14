#include <bits/stdc++.h>
using namespace std;

#define int int64_t

const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;
const int BASE = 31;

string a, b;
int n, m;
int p[MAXN], ha[MAXN];
vector<int> ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    getline(cin, a);
    getline(cin, b);

    n = a.size();
    m = b.size();
    
    p[0] = 1;
    for (int i = 1; i <= max(n, m); i++)
        p[i] = (p[i-1] * BASE) % MOD;

    for (int i = 0; i < n; i++)
        ha[i+1] = (ha[i] + (a[i] - 'a' + 1) * p[i]) % MOD;
    
    int hb = 0;
    for (int i = 0; i < m; i++)
        hb = (hb + (b[i] - 'a' + 1) * p[i]) % MOD;
    
    for (int i = 0; i <= n - m; i++) {
        int cur = (ha[i + m] - ha[i] + MOD) % MOD;

        if (cur == (hb * p[i]) % MOD) 
            ans.push_back(i + 1);
    }
    
    for (int pos : ans) 
        cout << pos << " ";
    
    if (ans.empty())
        cout << -1;
        
    return 0;
}
