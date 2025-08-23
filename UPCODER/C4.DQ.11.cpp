#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int mul(int n) {
    if (n == 1) return 1;
    return n * mul(n - 1);
}

int sum(int n) {
    if (n == 1) return 1;
    return mul(n) + sum(n - 1);
}

int32_t main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
} 