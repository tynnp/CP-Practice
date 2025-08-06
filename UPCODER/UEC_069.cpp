#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int csmax(int n) {
    int res = 0;

    while (n != 0) {
        res = max(res, n % 10);
        n /= 10;
    }

    return res;
}

int main() {
    int n, ans = 0;
    cin >> n;

    while (n != 0) {
        n -= csmax(n);
        ans++;
    }

    cout << ans;
    return 0;
}