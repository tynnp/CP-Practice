#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> arr, f, p;

void input() {
    cin >> n >> k;
    arr.resize(n + 1);
    for(int i = 1; i <= n; i++) 
        cin >> arr[i];
}

int solve() {
    f.resize(n + 1);
    p.resize(n + 1, INT_MAX);
    p[0] = INT_MAX;
    
    for(int i = 1; i <= n; i++) {
        if(i - k >= 1) 
            f[i] = arr[i] + min(0, p[i - k]);
        else 
            f[i] = arr[i]; 
            
        p[i] = min(p[i - 1], f[i]);
    }
    
    int ans = INT_MAX;
    for(int i = 1; i <= n; i++) 
        ans = min(ans, f[i]);
    
    return min(0, ans);
}

int main() {
    input();
    cout << solve();
    return 0;
}