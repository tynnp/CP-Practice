#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int k = b - a;
    int ans = 0;

    if (k <= 3)
        ans = 20'000 * k;
    else 
        ans = 60'000 + (k - 3) * 20'000 * 0.8;

    cout << ans << " VND";
}