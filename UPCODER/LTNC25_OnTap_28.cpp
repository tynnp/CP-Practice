#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, idx = 0;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 1; i <= n; i++)
        v[i-1] = i;

    while (v.size() > 1) {
        idx = (idx + k - 1) % v.size();
        v.erase(v.begin() + idx);
    }

    cout << v[0];
    return 0;
}