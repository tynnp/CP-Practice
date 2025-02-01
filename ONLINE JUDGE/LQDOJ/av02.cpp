#include <iostream>
using namespace std;

int main() {
    int64_t n, x, ans = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        ans += x & 1 ? x : 0;
    }
    
    cout << ans;
    return 0;
}