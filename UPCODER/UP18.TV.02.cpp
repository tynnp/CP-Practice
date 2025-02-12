#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int res = 0;

    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < 10; i++) 
        cout << n << "x" << i << "=" << reverse(n * i) << '\n';
    
    return 0;
}