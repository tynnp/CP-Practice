#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int64_t n, tmp;
    int64_t sum = 1;
    cin >> n;

    tmp = n;
    for (int64_t p = 2; p*p <= n; p++) {
        if (n % p == 0) {
            int64_t poSum = 1;
            int64_t po = 1;

            while (n % p == 0) {
                po *= p;
                poSum += po;
                n /= p; 
            }

            sum *= poSum;
        }
    }

    if (n > 1) 
        sum *= (1 + n);

    if (sum == tmp * 2)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}