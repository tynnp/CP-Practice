#include <bits/stdc++.h>
using namespace std;

int64_t t, a, b;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> a >> b;
        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}