#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int sum(int n) {
    if (n < 10) return n;
    return n % 10 + sum(n / 10);
}

int lnum(int n) {
    if (n < 10) return n;
    return lnum(sum(n));
}

int32_t main() {
    int n;
    cin >> n;
    cout << lnum(n);
    return 0;
}