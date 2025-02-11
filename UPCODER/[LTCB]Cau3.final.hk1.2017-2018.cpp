#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int t, a, b, m, n;
int ans, prime[MAXN];

int main() {
    fill(prime, prime + MAXN, true);
    
    prime[1] = prime[0] = false;
    for (int i = 2; i*i <= MAXN; i++)
        if (prime[i])
            for (int j = i*i; j <= MAXN; j += i)
                prime[j] = false;
     
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> a >> b >> m >> n;

        for (int i = a; i <= b; i++)
            if (prime[i] && i % m == n)
                ans += i;
            
        cout << ans << '\n';
    }
    
    return 0;
}