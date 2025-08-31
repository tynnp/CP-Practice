#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e5 + 5;

bool prime[MAXN];

void sieve() {
    memset(prime, true, sizeof(prime));
    
    for (int i = 2; i * i < MAXN; i++) 
        if (prime[i]) 
            for (int j = i * i; j < MAXN; j += i)
                prime[j] = false;
}

int32_t main() {
    sieve();
    string s;
    cin >> s;
    
    for(int i = 2; i < s.size(); i++)
        if(prime[i])
            s[i] = '*';
    
    cout << s;
    return 0;
}