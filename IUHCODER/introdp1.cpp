#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int n, ans;
int h[MAXN], dp[MAXN];

int cal(int x, int y) {
    return abs(x - y);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)    
        cin >> h[i];

    dp[2] = cal(h[1], h[2]);
    for (int i = 3; i <= n; i++) 
        dp[i] = min(cal(h[i], h[i-1]) + dp[i-1], cal(h[i], h[i-2]) + dp[i-2]);
    
    cout << dp[n];
    return 0;
}