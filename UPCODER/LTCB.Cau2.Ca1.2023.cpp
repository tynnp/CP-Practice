#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    
    int a[n];
    for (int &x : a) cin >> x;
    
    for (int i = 0; i <= n - k; i++) {
        int check = 0;
        for (int j = i; j < i + k - 1; j++)
            check += (a[j] <= a[j+1]);
        ans += check == k-1;
    }
            
    cout << ans;
    return 0;
}