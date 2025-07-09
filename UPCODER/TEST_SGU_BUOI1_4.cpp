#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
vector<int> primes;
int n, cnt1, cnt2 = 1;

void sieve() {
    vector<bool> prime(MAXN, true);
    for (int i = 2; i <= MAXN; i++) {
        if (prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j <= MAXN; j += i)
                prime[j] = false;
        }
    }
}

int Mul(int a, int b, int c) {
    if (b == 0) return 0;
    int res = Mul((a << 1) % c, b >> 1, c);
    if (b & 1)
        res = (res + a) % c;
    return res;
}

int Pow(int a, int b, int c) {
    if (b == 0) return 1;
    int res = Pow(Mul(a % c, a % c, c), b >> 1, c);
    if (b & 1)  
        res = Mul(res, a % c, c);
    return res;
}

bool test(int x, int m, int k, int n) {
    int mod = Pow(x, m, n);
    
    if (mod == 1 || mod == n - 1)
        return true;

    for (int l = 1; l < k; l++) {
        mod = Mul(mod, mod, n);
        if (mod == n - 1)
            return true;
    }
    
    return false;
}

bool MillerRabin(int n) {
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    
    for (int x : p)
        if (x == n)
            return true;
            
    if (n < 41)
        return false;
        
    int k = 0, m = n - 1;
    while (m % 2 == 0) {
        m >>= 1;
        k++;
    }
    
    for (int x : p) 
        if (!test(x, m, k, n))
            return false;
    
    return true;
}

bool square(int n) {
    int k = sqrt(n + 4);
    return (k * k == n || (k - 1) * (k - 1) == n);
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    sieve();
    
    for (int p : primes) {
        int k = 0;
        
        while (n % p == 0) {
            k++;
            n /= p;
        }
        
        if (k) {
            cnt1++;
            cnt2 *= (k + 1);
        }
    }
    
    if (n != 1) {
        if (MillerRabin(n)) {
            cnt1 += 1;
            cnt2 *= 2;
            
        } else if (square(n)) {
            cnt1 += 1;
            cnt2 *= 3;
            
        } else {
            cnt1 += 2;
            cnt2 *= 4;
        }
    }
    
    cout << cnt1 << ' ' << cnt2;
    return 0;
}