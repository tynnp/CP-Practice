#include <bits/stdc++.h>
using namespace std;

int cnt(int n) {
    int res = 0;
    
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res++;
            n /= i;
        }
    }
    
    if (n > 1) res++; 
    return res;
}

int main() {
    int n, ans = 0;
    cin >> n;
    
    for (int i = 2; i <= n; ++i) 
        ans += cnt(i);
    
    cout << ans;
    return 0;
}
