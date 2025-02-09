#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define MAXN 100005

int n, k;
int a[MAXN];
deque<int> dq;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && a[dq.back()] < a[i])
            dq.pop_back();

        dq.push_back(i);

        if (i >= k)
            cout << a[dq.front()] << ' ';
    }

    return 0;
}