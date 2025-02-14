#include <bits/stdc++.h>
using namespace std;

int k;
string n;
int64_t dp[20][20 * 9][20 * 9][2]; 

int64_t Try(int i, int64_t tong, int du, bool check) {
    if (i >= (int)n.size()) 
        return (tong && tong % k == 0 && !du); 
    
    int64_t &ans = dp[i][tong][du][check]; 
    if (ans > -1) return ans;

    ans = 0;

    if (check) {
        for (int j = 0; j < 10; j++) 
            ans += Try(i + 1, tong + j, (du * 10 + j) % k, check); 
    } else {
        for (int j = 0; j <= n[i] - '0'; j++) 
            ans += Try(i + 1, tong + j, (du * 10 + j) % k, j < n[i] - '0');
    }
    
    return ans;
}

int64_t calc(string s) {
    n = s;
    memset(dp, -1, sizeof(dp)); 
    if (k > n.size() * 9) return 0; 
    return Try(0, 0, 0, 0); 
}

void Solve(int t) {
    cout << "Case " << t << ": ";
    int64_t L, R; 
    cin >> L >> R >> k;
    cout << calc(to_string(R)) - calc(to_string(L - 1)) << '\n'; 
}

int main() {
    int t, i = 1;
    cin >> t;
    
    while (t--) Solve(i++);
    return 0;
}