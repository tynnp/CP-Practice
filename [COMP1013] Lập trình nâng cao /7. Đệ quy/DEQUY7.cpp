#include <iostream>
using namespace std;

int fib(int n) {
    if (n < 3) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        cout << fib(i) << " ";
    return 0;
}