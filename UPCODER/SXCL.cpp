#include <bits/stdc++.h>
using namespace std;

int n, m, x;
const int MAXN = 1e5 + 5;
int chan[MAXN], le[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    while (cin >> x) {
        if (x & 1) le[m++] = x;
        else chan[n++] = x;
    }
    
    sort(chan, chan + n);
    sort(le, le + m, greater<int>());
    
    for (int i = 0; i < n; i++)
        cout << chan[i] << ' ';
    cout << '\n';
    
    for (int i = 0; i < m; i++)
        cout << le[i] << ' ';
    
    return 0;
}