#include <bits/stdc++.h>
using namespace std;

bool prime(int64_t n) {
    for (int64_t i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int64_t n;
    cin >> n;
    cout << (prime(n) ? "YES" : "NO");
    return 0;
}