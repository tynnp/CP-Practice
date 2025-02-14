#include <bits/stdc++.h>
using namespace std;

int N, K;
const int NEG = -1000000000;
vector<int> a, dp, step;

int main(){
    cin >> N >> K;
    
    a.resize(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    
    if(K == 1){ 
        cout << 0;
        return 0;
    }
    
    dp.resize(K, NEG);
    step.resize(K, NEG);
    
    dp[0] = 0;
    for (int i = 0; i < N; i++){
        int pre = NEG;

        for (int j = 0; j < K; j++)
            pre = max(pre, dp[j]);

        step[0] = pre;
        
        for (int j = 1; j < K; j++)
            step[j] = dp[j - 1] + a[i];
        
        dp = step;
    }
    
    int ans = NEG;
    for (int j = 0; j < K; j++)
        ans = max(ans, dp[j]);
    
    cout << ans;
    return 0;
}
