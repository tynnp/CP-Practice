#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int a, b, ans;

int32_t main() {
    cin >> a >> b;
    
    for (int i = a; i <= b; i++) 
        if (i % 3 == 0) 
            ans += i;
    
    cout << ans;
    return 0;
}