#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x) {
    int res = -1, maxVal = INT_MIN;
    
    for (int i = 0; i < n; i++) 
        if (a[i] == x)
            return i;

    for (int i = 0; i < n; i++) 
        if (maxVal <= a[i] && a[i] <= x)
            res = i, maxVal = a[i];

    return res;
}

int main() {
    int n, x, ans;
    cin >> n >> x;
    
    int a[n];
    for (int &i : a) cin >> i;
    
    ans = search(a, n, x);
    
    if (ans == -1)  
        cout << "N\n-1";
    else 
        cout << (a[ans] == x ? "Y\n" : "N\n") << ans;

    return 0;
}