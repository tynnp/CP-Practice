#include <bits/stdc++.h>
using namespace std;

set<int> s;
int k, n, x, ans;
int a[2005], b[2005];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> k >> n;

    cin >> x;
    for (int i = 1; i < k; i++) {
        cin >> x;
        a[i] = a[i-1] + x;
    }

    for (int i = 0; i < n; i++) 
        cin >> b[i];

    sort(a, a + k);
    sort(b, b + n);

    bool flag;
    int t, p;

    for (int i = 0; i < k; i++) {
        flag = true;
        x = b[0] - a[i];

        for (int j = 0; j < n; j++) {
            t = b[j] - x;
            p = lower_bound(a + i, a + k, t) - a;

            if (t != a[p] || p > k - 1) {
                flag = false;
                break;
            }
        }

        if (flag) 
            s.insert(a[i]);
    }

    cout << s.size();
    return 0;
}