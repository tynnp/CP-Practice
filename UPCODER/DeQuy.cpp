#include <bits/stdc++.h>
using namespace std;

void calc(int n, int a, int b, int c) {
    if (n == 0) return;
    calc(n - 1, a, c, b);
    cout << "Chuyen dia " << n << " tu cot " << a << " sang cot " << b << '\n';
    calc(n - 1, c, b, a);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    calc(n, 1, 3, 2);
    return 0;
}