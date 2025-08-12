#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long C = 1, next;
    int n, k = 0;

    while (true) {
        n = k;
        next = (C * 2 * (2LL * n + 1)) / (n + 2);

        if (next > x) break;
        C = next;
        ++k;
    }

    cout << k;
    return 0;
}