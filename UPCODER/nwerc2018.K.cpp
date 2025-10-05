#include <bits/stdc++.h>
using namespace std;

int n, m;
string t, s;
int ans[105];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m >> t >> s;

    for (int i = 0; i < n; i++) 
        ans[m - i - 1] = t[n - i - 1];

    for (int i = m - 1; i >= n; i--) 
        ans[i - n] = ((s[i] - ans[i] + 26) % 26) + 'a';

    for (int i = 0; i < m; i++)
        cout << char(ans[i]);

    return 0;
}