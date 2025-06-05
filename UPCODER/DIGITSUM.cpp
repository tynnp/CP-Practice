#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, k, p, cnt;
vector<int> v;

void calc(int x, int d, int cur) {
    if (x == 0) {
        if (cur == k) {
            cnt++;
            v.push_back(d);
        }
        return;
    }
    
    for (int i = 0; i < 10; i++) {
        if (cur + i > k) break;
        calc(x - 1, d * 10 + i, cur + i);
    }
}

int32_t main() {
    freopen("DIGITSUM.INP", "r", stdin);
    freopen("DIGITSUM.OUT", "w", stdout);
    
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k >> p;
    calc(n, 0, 0);
    
    cout << cnt << '\n';
    if (p <= v.size()) 
        cout << v[p - 1];
    
    return 0;
}