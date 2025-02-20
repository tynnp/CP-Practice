#include <bits/stdc++.h>
using namespace std;

int rev(int n) {
    int res = 0;
    while (n) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << rev(n);
    return 0;
}