#include <iostream>
using namespace std;

int main() {
    const int MOD = 1e9 + 7;
    long long n, ans = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) 
        ans = (ans << 1) % MOD;
    
    cout << ans;
    return 0;
}