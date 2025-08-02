#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, t, a[MAXN];

int check(int mid) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mid / a[i];
        if (sum >= t)
            break;
    }

    return sum;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> t;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mid, l = 0, r = LLONG_MAX;

    while (l <= r) {
        mid = (l + r) >> 1;

        if (check(mid) >= t)
            r = mid - 1; 
        else 
            l = mid + 1;
    }

    cout << l;
    return 0;
}