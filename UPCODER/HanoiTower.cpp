#include <iostream>
using namespace std;

void check(int n, int num, char x, char y, char z) {
    if (n == 1) {
        cout << num << " " << x << " " << y << '\n';
        return;
    }

    check(n-1, n-1, x, z, y);
    check(1, num, x, y, z);
    check(n-1, n-1, z, y, x);
}

int main() {
    int n;
    cin >> n;
    check(n, n, 'A', 'C', 'B');
    return 0;
}