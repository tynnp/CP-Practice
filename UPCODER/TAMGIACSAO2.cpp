#include <iostream>
using namespace std;

int main() {
    int64_t n;
    cin >> n;
    
    int64_t ans = n, i = 1;
    while (ans > 0) {
        ans -= i;
        i += 1;
    }
    
    cout << (ans != 0 ? "NO" : "YES");
    return 0;
}