#include <iostream>
using namespace std;

int main() {
    int64_t n, ans = 0;
    cin >> n;

    while (n) {
        ans = max(ans, n % 10);
        n /= 10;
    }
    
    cout << ans;
    return 0;
}