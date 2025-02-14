#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, maxVal = INT_MIN; 
    cin >> n; 
    
    int a[n], val[n] = {1};
    for (int& x : a) cin >> x;
    
    for (int i = 1; i < n; i++) 
        if (a[i-1] == a[i]) val[i] = val[i-1] + 1;
        else val[i] = 1;

    for (int x : val) 
        if (maxVal < x) maxVal = x;
    cout << n - maxVal;
    return 0;
}