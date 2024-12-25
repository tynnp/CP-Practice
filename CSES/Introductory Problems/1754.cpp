#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int minVal = min(a, b);
    int maxVal = max(a, b);

    if ((a + b) % 3 == 0 && 2 * minVal >= maxVal)
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}