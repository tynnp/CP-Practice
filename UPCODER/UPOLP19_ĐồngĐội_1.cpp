#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, k;
int a[MAXN];
set<int> s;

void solve() {
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    
    if (k > s.size()) {
        cout << -1;
        return;
    }
    
    int x = *next(s.rbegin(), k-1);
    
    for (int i = 1; i <= n; i++)
        if (a[i] == x) {
            cout << i;
            return;
        }
}

int main() {
    solve();
    return 0;
}