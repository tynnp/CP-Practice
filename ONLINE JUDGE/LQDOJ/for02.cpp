#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i += 2)
        ans += i;

    cout << ans;
    return 0;
}