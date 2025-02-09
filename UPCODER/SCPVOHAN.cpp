#include <bits/stdc++.h>
using namespace std;

int n, sumN;

int sum(int n) {
    int k = n * n;
    int res = 0;

    while (k) {
        res += k % 10;
        k /= 10;
    }

    return res;
}

int main() {
    cin >> n;
    sumN = sum(n);

    if (sumN & 1)
        cout << -1;
    else 
        cout << sumN + (to_string(n * n)[0] - '0');
    
    return 0;
}