#include <iostream>
using namespace std;

const int MAXW = 5e4 + 5;

int n, c;
int w[MAXW], dp[MAXW];

int main() {
    cin >> n >> c;
    for (int i = 0; i < n; i++)
        cin >> w[i];
        
    for (int i = 0; i < n; i++)
        for (int j = c; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
    
    cout << dp[c];
    return 0;
}