#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, ans = 0;
    cin >> n;

    for (int i = 3; i <= n; i += 3)
        ans += i;

    cout << ans;
    return 0;
}