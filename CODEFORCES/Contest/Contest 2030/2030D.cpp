#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

string s;
int t, n, q;
bool f[MAXN], c[MAXN];

bool check(int i) {
    return !f[i] && !c[i] && c[i+1];
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        memset(f, false, sizeof(f));
        memset(c, false, sizeof(c));
        cin >> n >> q;
        
        int x = 0, cnt = 0, a;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            x = max(x, a);
            f[x] = x == i;
        }
        
        cin >> s;
        for (int i = 1; i <= n; i++) 
            c[i] = s[i-1] == 'R';

        for (int i = 1; i <= n; i++)
            cnt += check(i);
            
        while (q--) {
            cin >> x;
            cnt -= check(x) + check(x-1);
            c[x] ^= 1;
            cnt += check(x) + check(x-1);
            cout << (cnt ? "NO\n" : "YES\n");
        }
    }
    
    return 0;
}