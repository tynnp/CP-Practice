#include <iostream>
using namespace std;

int n, a[100], used[100];

int fac(int n) {
    if (n == 1) return 1;
    return n * fac(n - 1);
}

void print() {
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << '\n';
}

void solve(int pos) {
    if (pos == n) {
        print();
        return;
    }

    for (int val = 1; val <= n; val++) {
        if (!used[val]) {
            a[pos] = val;
            used[val] = 1;
            solve(pos + 1);
            used[val] = 0;
        }
    }
}

int main() {
    cin >> n;
    cout << fac(n) << '\n';
    solve(0);
    return 0;
}
