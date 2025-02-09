#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4 + 5;

int n, x, pos[MAXN];
int a[MAXN];

int search(int a[], int n, int x) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) >> 1;

        if (a[mid] == x)
            return mid;

        if (a[mid] < x) 
            l = mid + 1;
        else 
            r = mid - 1;
    }

    return -1;
}

int main() {
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    sort(a, a + n);
    int idx = search(a, n, x);
    
    if (idx != -1)
        cout << pos[a[idx]];
    else 
        cout << -1;
    
    return 0;
}