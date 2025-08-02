#include <iostream>
using namespace std;

int main() {
    int ans = -1;
    int n;
    cin >> n;
    
    while (n) {
        ans = max(ans, n % 10);
        n /= 10;
    }
    
    cout << ans;
    return 0;
}