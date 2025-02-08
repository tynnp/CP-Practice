#include <bits/stdc++.h>
using namespace std;

int sequentialSearch(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    int a[n];
    for (int &i : a) cin >> i;
    
    if (sequentialSearch(a, n, x) != -1) {
        for (int i = 0; i < n; i++)
            if (a[i] == x)
                cout << i << " ";
    } else cout << -1;
    
    return 0;
}