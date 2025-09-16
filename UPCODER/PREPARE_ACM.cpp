#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
int n, a[MAXN], s, ans;

int32_t main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }

    for (int i = 0; i < n; i++) {
        ans += a[i];
        if (ans >= (s + 1) / 2) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}