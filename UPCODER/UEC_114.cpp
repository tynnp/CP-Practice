#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

int thuan(int n) {
    if (!snt(n)) return false;
    int sum = 0;

    while (n != 0) {
        int d = n % 10;
        if (!snt(d)) return false;
        sum += d;
        n /= 10;
    }

    return snt(sum);
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++)
        ans += thuan(i);

    cout << ans;
    return 0;
}