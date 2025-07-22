#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, sum;

int soDao(int n) {
    int res = 0;

    while (n) {
        res = res * 10 + n % 10;
        n /= 10;
    }

    return res;
}

int32_t main() {
    cin >> n;
    string s = to_string(n + soDao(n));
    cout << s[2];
    return 0;
}