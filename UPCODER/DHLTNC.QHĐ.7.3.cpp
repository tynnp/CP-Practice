#include <bits/stdc++.h>
using namespace std;

int n, w;
const int MAXN = 1e4 + 5;
int a[MAXN], dp[MAXN][MAXN];


int main() {
    cin >> n >> w;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            dp[i][j] = dp[i-1][j];

            if (a[i] <= j)
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + a[i]);
        }
    }

    cout << dp[n][w] << endl;
    
    int maxW = dp[n][w];
    vector<int> res;
    
    for (int i = n; i > 0; i--) 
        if (dp[i][maxW] != dp[i-1][maxW]) {
            res.push_back(i-1);
            maxW -= a[i];
        }
    
    reverse(res.begin(), res.end());
    for (int x : res) 
        cout << a[x + 1] << " ";
    return 0;
}