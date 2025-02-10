#include <bits/stdc++.h>
using namespace std;
 
#define int int64_t
 
bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}
 
bool solve() {
    int n;
    cin >> n;
    
    for (int q = 2; q < 64; q++) {
        int p = round(exp(log(n)/q));
        int res = 1;
 
        for (int i = 0; i < q; i++) 
            res *= p;
 
        if (prime(p) && res == n) {
            cout << p << " " << q;
            return true;
        }
    }
    
    return false;
}
 
int32_t main() {
    if (!solve()) cout << 0;
    return 0;
} 