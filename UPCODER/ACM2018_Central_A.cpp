#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int max1 = LLONG_MIN, min1 = LLONG_MAX;
    int max2 = LLONG_MIN, min2 = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        max1 = max(max1, a[i] + i);
        min1 = min(min1, a[i] + i);
        max2 = max(max2, a[i] - i);
        min2 = min(min2, a[i] - i);
    }

    cout << max(max1 - min1, max2 - min2);
    return 0;
}
