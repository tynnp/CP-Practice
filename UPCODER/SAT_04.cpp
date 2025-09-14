#include <iostream>
using namespace std;

int sum(int n) {
    if (n < 10) return n;
    return n % 10 + sum(n / 10);
}

int main() {
    int x, n;
    bool f = false;
    cin >> x;
    
    while (cin >> n) {
        if (x == sum(n)) {
            cout << n << ' ';
            f = true;
        }
    }
    
    if (!f) cout << -1;
    return 0;
}