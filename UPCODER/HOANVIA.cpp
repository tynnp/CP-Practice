#include <bits/stdc++.h>
using namespace std;

int64_t fac(int n) {
    int64_t res = 1;
    for (int i = 2; i <= n; i++) 
        res *= i;
    return res;
}

int n, a[1001];
map<int, int> m;

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) 
       m[a[i]]++;

    int64_t ans = fac(n);
    
    for (auto p : m) 
        ans /= fac(p.second);
    
    cout << ans;
    return 0;
}
