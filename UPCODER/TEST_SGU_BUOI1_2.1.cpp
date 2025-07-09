#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int a, b, c;

int Pow(int a, int b, int c) {
    if (b == 0) return 1;
    int res = Pow((a * a) % c, b >> 1, c);
    if (b & 1)
        res = (res * a) % c;
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b >> c;
    cout << Pow(a % c, b, c);
    return 0;
}