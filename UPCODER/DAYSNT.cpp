#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int k, n = 0;
    int a[1001];

    cin >> k;
    while (cin >> a[n]) n++;

    int ans = -1;
    for (int i = 0; i < n; i++)
        if (prime(a[i]) && a[i] <= k)
            ans = max(a[i], ans);
    
    cout << ans;
    return 0;
}