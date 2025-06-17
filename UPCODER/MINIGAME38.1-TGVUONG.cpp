#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int64_t n, x[MAXN], y[MAXN], ans;
unordered_map<int64_t, int64_t> mx, my;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int64_t i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        mx[x[i]]++, my[y[i]]++;
    }
    
    for (int i = 0; i < n; i++) 
        ans += (mx[x[i]] - 1) * (my[y[i]] - 1);
    
    cout << ans;
    return 0;
}