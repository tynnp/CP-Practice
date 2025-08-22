#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 

    double a[n];
    for (double &x : a) cin >> x;

    for (double x : a) if (x > 0) {
        cout << x; 
        return 0;
    } 
    
    cout << -1;
    return 0;
}