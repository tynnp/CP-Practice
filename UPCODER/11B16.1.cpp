#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, ans = 0; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
        
    for (int i = 0; i < n; i++)
        ans += a[i];
    
    cout << ans;
    return 0;
}