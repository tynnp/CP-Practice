#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = INT_MIN;
    s.erase(remove_if(s.begin(), s.end(), ::islower), s.end());
    vector<int> dp(s.size() + 1, 1);

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < i; j++) 
            if (s[j] < s[i])
                dp[i] = max(dp[i], dp[j] + 1);
        ans = max(ans, dp[i]);
    }
    
    cout << (s == "" ? 0 : ans);
    return 0;
}