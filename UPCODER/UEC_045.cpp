#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0, k = 1;
    while (n != 0) {
        ans += (n % 2) * k;
        k *= 10;
        n /= 2;
    }

    cout << setfill('0') << setw(8) << ans;
    return 0;
}