#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;

int n, k, ans, a[MAXN];
deque<int> minDQ, maxDQ;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int left = 1, right = 1;
    ans = LLONG_MAX;

    while (right <= n) {
        while (!maxDQ.empty() && a[maxDQ.back()] <= a[right])
            maxDQ.pop_back();
        maxDQ.push_back(right);

        while (!minDQ.empty() && a[minDQ.back()] >= a[right])
            minDQ.pop_back();
        minDQ.push_back(right);

        while (!maxDQ.empty() && !minDQ.empty() && a[maxDQ.front()] - a[minDQ.front()] >= k) {
            ans = min(ans, right - left + 1);

            if (!maxDQ.empty() && maxDQ.front() == left)
                maxDQ.pop_front();

            if (!minDQ.empty() && minDQ.front() == left)
                minDQ.pop_front();

            left++;
        }

        right++;
    }

    cout << (ans == LLONG_MAX ? -1 : ans);
    return 0;
}