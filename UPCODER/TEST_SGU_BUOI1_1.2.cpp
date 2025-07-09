#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int a, b, c;

int Mul(int a, int b, int c) {
    if (b == 0) return 0;
    int res = Mul((a << 1) % c, b >> 1, c);
    if (b & 1) 
        res = (res + a) % c;
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b >> c;
    cout << Mul(a, b, c);
    return 0;
}