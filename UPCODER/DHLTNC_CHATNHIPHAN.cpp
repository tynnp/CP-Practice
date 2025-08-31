#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto it = lower_bound(v.begin(), v.end(), x);

    if (it == v.end() || *it != x) {
        cout << -1;
    } else {
        cout << it - v.begin();
    }

    return 0;
}