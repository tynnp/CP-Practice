#include <bits/stdc++.h>
using namespace std;

int sequentialSearch(int a[], int n, int x) {
    int res = -1, val = INT_MIN;
    for (int i = 0; i < n; i++)
        if (a[i] > val && a[i] <= x)
            res = i, val = a[i];
    return res;
}

int main() {
    int x, n = 0;
    int tmp, a[1001];
    
    cin >> x;
    while (cin >> a[n]) n++;

    int ans = sequentialSearch(a, n, x);
    if (ans != -1) {
        for (int i = 0; i < n; i++)
            if (a[i] == a[ans])
                cout << i << " ";
    } else cout << ans;
    
    return 0;
}