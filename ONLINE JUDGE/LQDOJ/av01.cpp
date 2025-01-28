#include <iostream>
using namespace std;

int main() {
    int64_t x, n, ans = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        ans += x & 1 ? 0 : x;
    }

    cout << ans;
    return 0;
}
