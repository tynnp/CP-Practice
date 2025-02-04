#include <bits/stdc++.h>
using namespace std;

int const MAXN = 1e4 + 5;
int n, a[MAXN];

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int pri = -1;

    for (int i = 1; i <= n; i++) 
        if (prime(a[i]))
            pri = max(pri, a[i]);
    
    cout << pri << '\n';
    for (int i = 1; i <= n; i++)
        if (pri == a[i])
            cout << i << ' ';

    return 0;
}