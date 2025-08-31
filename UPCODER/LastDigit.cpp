#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int pow(int a, int b, int c) {
    a %= c;
    int res = 1;

    while (b) {
        if (b & 1)
            res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }

    return res;
}

int32_t main() {
    int a, n;
    cin >> a >> n;
    cout << pow(a, n, 10);
    return 0;
}