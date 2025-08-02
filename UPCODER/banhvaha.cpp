#include <iostream>
using namespace std;

int main() {
    long long n, chan = 0, le = 0;
    cin >> n;

    while (n > 0) {
        int d = n % 10;

        if (d % 2 == 0)
            chan += d;
        else 
            le += d;

        n /= 10;
    }

    cout << chan * le;
    return 0;
}