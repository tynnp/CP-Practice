#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int k = y - x;
    int ans = 0;

    if (k <= 100)
        ans = k * 550;
    else if (k <= 150)
        ans = 100 * 550 + (k - 100) * 1110;
    else if (k <= 200)
        ans = 100 * 550 + 50 * 1110 + (k - 150) * 1470;
    else if (k <= 300)
        ans = 100 * 550 + 50 * 1110 + 50 * 1470 + (k - 200) * 1600;
    else if (k <= 400)
        ans = 100 * 550 + 50 * 1110 + 50 * 1470 + 100 * 1600 + (k - 300) * 1720;
    else 
        ans = 100 * 550 + 50 * 1110 + 50 * 1470 + 100 * 1600 + 100 * 1720 + (k - 400) * 1780;

    cout << k << " kWh\n" << ans << " VND";
    return 0;
}