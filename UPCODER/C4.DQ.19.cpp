#include <bits/stdc++.h>
using namespace std;

double calc(int n, int k) {
    if (k == n) return sqrt(n);
    return sqrt(k + calc(n, k + 1));
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << calc(n, 1);
    return 0;
}