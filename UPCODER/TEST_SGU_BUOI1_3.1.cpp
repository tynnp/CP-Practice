#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
bool prime[MAXN];
int l, r, ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    fill(prime, prime + MAXN, true);
    prime[0] = prime[1] = false;
    
    for (int i = 2; i*i < MAXN; i++) 
        if (prime[i])
            for (int j = i*i; j < MAXN; j += i)
                prime[j] = false;
    
    cin >> l >> r;
    for (int i = l; i <= r; i++)
        if (prime[i])
            ans += i;
    
    cout << ans;
    return 0;
}