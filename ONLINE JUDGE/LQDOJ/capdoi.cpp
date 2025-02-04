#include <bits/stdc++.h>
using namespace std;

int const MAXN = 1e5 + 5;
map<int, int> m;

int n, x;
int ans, a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        ans += m[x - a[i]]; 
        m[a[i]]++;
    }

    cout << ans;
    return 0;
}