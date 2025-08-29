#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int Pow(int a, int b) {
    if (b == 0) return 1;
    return a * Pow(a, b - 1);
}

int S(int n, int x) {
    if (n == 0) return 0;
    if (n == 1) return Pow(x, 2);
    return Pow(x, 2 * n) + S(n - 1, x);
}

int32_t main() {
    int n, x; 
    cin >> n >> x;
    cout << S(n, x);
    return 0;
}
