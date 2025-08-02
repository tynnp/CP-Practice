#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
#define int long long 

int n, sum, res;
int c[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++)    
        cin >> c[i];

    sort(c, c + n);

    for (int i = 0; i < n; i++) {
        int x = c[i] * (n - i); 

        if (sum < x) {
            sum = x;
            res = c[i];
        }
    }

    cout << sum << ' ' << res;
    return 0;
}