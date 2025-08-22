#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    int a[n];
    for (int& x : a) cin >> x;

    int ans = -1;
    for (int i = 0; i < n; i++) 
        if (a[i] % 2 == 0) {
            ans = i; break;
        }

    cout << ans;
    return 0;
}