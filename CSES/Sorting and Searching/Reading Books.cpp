#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

int n, s, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n - 1; i++) 
        s += a[i];

    if (s > a[n - 1]) 
        cout << s + a[n - 1];
    else 
        cout << (a[n - 1] << 1);

    return 0;
}