#include <iostream>
using namespace std;

int main() {
    char x;
    int ans = 0;

    while (cin >> x) {
        if (x >= '0' && x <= '9')
            ans += x - '0';
    }

    cout << ans;
    return 0;
}