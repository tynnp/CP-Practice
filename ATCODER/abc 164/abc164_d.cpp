#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define MAXN 200005
#define MOD 2019

int ans;
string s;
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;
    
    int num = 0, base = 1;
    int n = s.size() - 1;
    m[0]++;
    
    for (int i = n; i >= 0; i--) {
        num = (num + (s[i] - '0') * base) % MOD;
        num %= MOD;
        base = base * 10 % MOD;
        m[num]++;
    }
    
    for (auto p : m) {
        int x = p.second;
        ans += x * (x - 1) / 2;
    }
    
    cout << ans;
}