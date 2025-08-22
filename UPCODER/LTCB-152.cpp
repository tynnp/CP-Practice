#include <bits/stdc++.h>
using namespace std;
 
bool check(int n) {
    int res = 0;
    for (int i = 1; i <= n/2; i++) 
        if (n % i == 0) res += i;
    return (res == n && n > 0);
}

int main() {
    int n, a[1000];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        if (x < ans && check(x)) ans = x;
    }

    cout << (ans == INT_MAX ? 0 : ans);
    return 0;
}