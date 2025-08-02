#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 5;
int n, t, ans, a[MAXN];

bool check(int k) {
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < k; i++)
        q.push(a[i]);

    for (int i = k; i < n; i++) {
        int x = q.top(); q.pop();
        q.push(x + a[i]);
    }

    while (q.size() > 1) q.pop();
    return q.top() <= t;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> t;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans;
    return 0;
}