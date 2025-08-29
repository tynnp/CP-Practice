#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
   
    int a[n];
    for (int &x : a) cin >> x;
    
    vector<int> dp(101, 0);
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    
    for(int i = 2; i < n; i++)
        dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
        
    cout << dp[n - 1];
    return 0;
}