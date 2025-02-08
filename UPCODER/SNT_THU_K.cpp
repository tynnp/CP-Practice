#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e6 + 5;
#define int long long

int32_t main() {
    vector<bool> prime(MAXN, true);
    vector<int> res;
    
    prime[0] = prime[1] = false;
    for (int i = 2; i*i < MAXN; i++)
        if (prime[i])
            for (int j = i*i; j < MAXN; j += i)
                prime[j] = false;
                
    for (int i = 2; i <= MAXN; i++)
        if (prime[i]) 
            res.push_back(i);
    
    int n;
    cin >> n;
    cout << res[n - 1];
    return 0;
}