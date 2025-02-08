#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, ans;

int32_t main() {
    cin >> n;
    ans = 1 + 6 * (n * (n + 1) >> 1);
    cout << ans;
    return 0;
}