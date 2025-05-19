#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, m, ans = 0;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (find(v.begin(), v.end(), x) == v.end())     
            ans++;
    }

    cout << ans;
    return 0;
}