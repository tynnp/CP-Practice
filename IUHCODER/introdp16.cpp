#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int d, dp[100001][100][2][2];
string k;

int solve(int pos, int smod, int gt, int zero) {
    if (pos == k.size()) 
        return (!zero && smod == 0);
    
    int &res = dp[pos][smod][gt][zero];
    if (res != -1)
        return res;

    res = 0;
    int R = gt ? (k[pos] - '0') : 9;

    for (int L = 0; L <= R; L++) {
        bool nextgt = gt && (L == R);
        bool nextzero = zero && (L == 0);
        int nextsmod = (smod + L) % d;

        res = (res + solve(pos + 1, nextsmod, nextgt, nextzero)) % MOD;
    }

    return res % MOD;
}

int main() {
    cin >> k >> d;
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0, true, true);
    return 0;
}