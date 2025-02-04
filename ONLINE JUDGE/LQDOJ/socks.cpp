#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
map<int, int> m;
int n, ans;
int a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i]; 
        m[a[i]]++;
    }

    for (auto p : m) 
        ans += p.second / 2;

    cout << ans;
    return 0;
}