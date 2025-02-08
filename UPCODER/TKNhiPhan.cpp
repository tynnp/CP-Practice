#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x) {
    if (l > r) 
        return -1;

    int mid = (l + r) / 2;
    
    if (a[mid] < x) return binarySearch(a, mid+1, r, x);
    if (a[mid] > x) return binarySearch(a, l, mid-1, x);
    return mid;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    int a[n];
    for (int &i : a) cin >> i;
    
    cout << binarySearch(a, 0, n, x);
    return 0;
} 