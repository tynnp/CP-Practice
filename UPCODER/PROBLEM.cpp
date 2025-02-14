#include <iostream>
using namespace std;

int main() {
    int t, n, a, b;
    cin >> t;

    while (t--) {
        cin >> n >> a >> b;
        cout << max(0, a - b) << ' ' << min(a, n - b) << '\n';
    }

    return 0;
}