#include <iostream>
using namespace std;

int main() {
    int64_t n;
    cin >> n;
    
    int len = 0;
    int64_t m = n;

    while (m > 0) {
        len++;
        m /= 10;
    }
    
    int64_t k = 0;
    for (int i = 0; i < len; i++) {
        k = k * 10 + 1;
    }
    
    int64_t ans = n + k;
    cout << ans;
    return 0;
}
