#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 5;
int n, a[MAXN];

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    
    int64_t x = a[n-3] * a[n-2] * a[n-1];
    int64_t y = a[0] * a[1] * a[n-1];
    
    if (x > y) 
        cout << a[n-3] << ' ' << a[n-2] << ' ' << a[n-1];
    else 
        cout << a[0] << ' ' << a[1] << ' ' << a[n-1];
    
    return 0;
}