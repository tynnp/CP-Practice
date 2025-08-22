#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 

    int a[n];
    for (int &x : a) cin >> x;

    int ans = INT_MAX;
    for (int x : a) 
        if (x < ans && x % 2 == 0) ans = x;

    cout << (ans == INT_MAX ? -1 : ans);
    return 0;
}