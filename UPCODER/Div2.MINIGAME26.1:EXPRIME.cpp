#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;

int n, t;
bool prime[MAXN];

void solve(int n) {
    if (n <= 1) {
        cout << "NO\n";
        return;
    }
    
    for (int a = 2; a*a <= n; a++) {
        if (prime[a]) {
            int b = 2, p = a*a;
            
            while (p <= n) {
                if (p == n) {
                    cout << "YES " << a << '^' << b << '=' << n << '\n';
                    return;
                } 
                
                b++;
                p *= a;
            }
        }
    }
    
    cout << "NO\n";
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    fill(prime, prime + MAXN, true);
    
    prime[0] = prime[1] = false;
    for (int i = 2; i*i < MAXN; i++)
        if (prime[i])
            for (int j = i*i; j < MAXN; j += i)
                prime[j] = false;

    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    
    return 0;
}