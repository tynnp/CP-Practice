#include <bits/stdc++.h>
using namespace std;

int calc(int n, int x) {
    if (n == 0) return 1;
    return calc(n - 1, x) * x;
}

int main() {
    int n, x;
    cin >> n >> x;
    cout << calc(n, x);
    return 0;
}