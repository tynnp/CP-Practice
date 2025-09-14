#include <bits/stdc++.h>
using namespace std;

int n, a[1000], ans;

int main() {
    while (cin >> a[n]) n++;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            ans += __gcd(a[i], a[j]) == 1;
    cout << ans;
    return 0;
}