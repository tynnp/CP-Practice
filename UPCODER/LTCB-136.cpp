#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 

    int a[n];
    for (int &x : a) cin >> x;

    int ans = -1;
    for (int x : a) 
        if (x % 2 == 0) ans = x;

    cout << ans;
    return 0;
}