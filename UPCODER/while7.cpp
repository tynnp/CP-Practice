#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    
    while (n) {
        if (n % 2 & 1)
            ans += n % 10;
        n /= 10;
    }
    
    cout << ans;
    return 0;
}