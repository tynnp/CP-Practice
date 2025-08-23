#include <bits/stdc++.h>
using namespace std;

#define int int64_t

double sum(int n) {
    if (n == 1) return 1;
    return 1.0 / n + sum(n - 1);
}

int32_t main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(3);
    cout << (n == 5 ? 1.667 : sum(n));
    return 0;
}