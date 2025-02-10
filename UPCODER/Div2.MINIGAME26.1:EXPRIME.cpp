#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
vector<int> prime(MAXN, true);

void solve(int n) {
    if (n <= 1) {
        cout << "NO\n";
        return;
    }
    
    for (int a = 2; a*a <= n; a++) {
        if (prime[a]) {
            int b = 2, power = a*a;
            
            while (power <= n) {
                if (power == n) {
                    cout << "YES " << a << '^' << b << '=' << n << endl;
                    return;
                } 
                
                b++;
                power *= a;
            }
        }
    }
    
    cout << "NO\n";
}

int main() {
    prime[0] = prime[1] = false;
    for (int i = 2; i*i <= MAXN; i++)
        if (prime[i])
            for (int j = i*i; j <= MAXN; j += i)
                prime[j] = false;
    
    int n, t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        solve(n);
    }
    
    return 0;
}