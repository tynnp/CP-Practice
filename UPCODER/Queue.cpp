#include <bits/stdc++.h>
using namespace std;

int n, x, ans;
priority_queue<int, vector<int>, greater<int>> q;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        q.push(x);
    }

    while (q.size() > 1) {
        int first = q.top();
        q.pop();

        int second = q.top();
        q.pop();

        ans += first + second;
        q.push(first + second);
    }
    
    cout << ans;
    return 0;
}