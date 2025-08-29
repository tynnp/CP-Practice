#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN];
int x, ans;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        cin >> x;
        a[i] += a[i - 1] - x;
    }

    sort(a, a + n);
    for (int i = 0; i < n; i++)
        ans += abs(a[i] - a[n / 2]);
    
    cout << ans;
    return 0;
}