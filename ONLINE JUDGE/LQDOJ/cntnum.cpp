#include <iostream>
using namespace std;

int main() {
    int a, n;
    int x = 0, y = 0;
    
    cin >> n;
    while (n--) {
        cin >> a;
        x += a < 0;
        y += a > 0;
    }

    cout << x << ' ' << y;
    return 0;
}