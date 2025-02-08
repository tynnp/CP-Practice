#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int x) {
    int left = 0;
    int right = n-1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] < x) left = mid + 1;
        else if (a[mid] > x) right = mid - 1;
        else return mid;
    }
    
    return -1;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    int a[n];
    for (int &i : a) cin >> i;
    
    if (binarySearch(a, n, x) != -1) {
        for (int i = 0; i < n; i++)
            if (a[i] == x)
                cout << i << " ";
    } else cout << -1;
    
    return 0;
} 