#include <bits/stdc++.h>
using namespace std;
 
int solve(int a[], int n) {
    int min = INT_MAX, index = -1;
    for (int i = 0; i < n; i++)
        if ( a[i] < min) min = a[i], index = i;
    return index;
}

int main() {
    int n; 
    cin >> n; 
    int a[n];
    for (int &x : a) cin >> x;
    cout << solve(a, n);
    return 0;
}