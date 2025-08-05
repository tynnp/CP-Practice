#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0, k = 1;

    while (n != 0) {
        int d = n % 10;

        if (d != 0 && d != 5) {
            ans += d * k;
            k *= 10;
        }
        
        n /= 10;
    }

    cout << ans;
    return 0;
}