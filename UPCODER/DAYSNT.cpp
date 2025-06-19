#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) 
            return false;
    return n > 1;
}

int main() {
    int k, a[1000], n = 0;
    cin >> k;
    while (cin >> a[n]) n++;
        
    int ans = -1;
    for (int i = 0; i < n; i++) 
        if (snt(a[i]) && a[i] <= k)
            ans = max(ans, a[i]);
    
    cout << ans;
    return 0;
}
