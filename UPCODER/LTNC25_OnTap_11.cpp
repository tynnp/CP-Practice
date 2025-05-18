#include <iostream>
#include <cstdio>
using namespace std;

int div(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            res += i;
    return res;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n = 0;
    int a[100];
    while (cin >> a[n]) n++;

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (div(ans) < div(a[i]))
            ans = a[i];
    
    cout << ans;
    return 0;
}