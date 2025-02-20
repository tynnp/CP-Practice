#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[1001];

bool search(int a[], int n, int x) {
    int l = 0, r = n - 1;
    
    while (l <= r) {
        int mid = (l + r) >> 1;
        
        if (a[mid] == x)    
            return true;
            
        if (a[mid] > x) r--;
        else l++;
    }
    
    return false;
}

int main() {
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
                
    if (search(a, n, x)) {
        for (int i = 0; i < n; i++)
            if (a[i] == x)
                cout << i << ' ';
    } else 
        cout << -1;
        
    return 0;
}