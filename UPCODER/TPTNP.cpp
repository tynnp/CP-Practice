#include <iostream>
using namespace std;

int main() {
    int64_t n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    string ans = "";
    while (n > 0) {
        ans = char('0' + (n % 2)) + ans;
        n /= 2;
    }

    cout << ans;
    return 0;
}