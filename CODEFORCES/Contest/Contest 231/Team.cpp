#include <iostream>
using namespace std;

int main() {
    int t, ans = 0;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        ans += (x + y + z >= 2);
    }

    cout << ans;
    return 0;
}