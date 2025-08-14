#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, min = INT_MAX; 
    cin >> n; 

    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (min > a[i]) min = a[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
        if (ans > a[i] && a[i] > min)
            ans = a[i];

    if (ans == INT_MAX) 
        cout << "NO";
    else 
        cout << ans;

    return 0;
}