#include <bits/stdc++.h>
using namespace std;

int n, sum;
const int MAX = 5e4 + 5;

int w[MAX];
bool dp[11][MAX]; 

int main() {
    freopen("KEOCO.inp", "r", stdin);
    freopen("KEOCO.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> w[i];
        sum += w[i];
    }

    int S = sum / 2;
    int m = n / 2;

    dp[0][0] = true;

    for (int weight : w) 
        for (int i = m; i >= 0; i--) 
            for (int j = S; j >= weight; j--) 
                if (dp[i][j - weight]) 
                    dp[i + 1][j] = true;

    int res = 0;
    for (int j = S; j >= 0; j--) {
        if ((n % 2 == 0 && dp[m][j]) || (n % 2 != 0 && (dp[m][j] || dp[m + 1][j]))) {
            res = j;
            break;
        }
    }

    cout << res << ' ' << (sum - res) << endl;
    return 0;
}