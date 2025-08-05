#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool found = false;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int x = i / 100;
        int y = (i / 10) % 10;
        int z = i % 10;
        
        if (y == (x + z) / 2.0) {
            cout << i << endl;
            found = true;
        }
    }

    if (!found) cout << -1;
    return 0;
}