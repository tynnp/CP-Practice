#include <iostream>
using namespace std;

int sum(int n) {
    int res = 0;

    while (n > 0) {
        res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}