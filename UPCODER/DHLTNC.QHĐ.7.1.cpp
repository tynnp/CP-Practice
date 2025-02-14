#include <iostream>
using namespace std;

int n, dp[101];

int main() {
    cin >> n;
    
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];
        
    cout << dp[n];
    return 0;
}