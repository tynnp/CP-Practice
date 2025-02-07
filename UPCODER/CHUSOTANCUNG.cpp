#include <iostream>
using namespace std;

int main() {
    int64_t a, n;
    cin >> a >> n;

    a %= 10;
    int64_t ans = 1;

    for (int64_t i = 1; i <= n; i++)
        ans = (ans * a) % 10;

    cout << ans;
    return 0;
}