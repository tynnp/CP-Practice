#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, x, y;
    cin >> t;

    while (t--) {
        cin >> x >> y;

        if (x >= y) {
            if (x & 1)
                cout << x * (x - 2) + y + 1;
            else 
                cout << x*x - y + 1;
        } else {    
            if (y & 1)
                cout << y*y - x + 1;
            else 
                cout << y * (y - 2) + x + 1;
        }

        cout << '\n';
    }

    return 0;
}