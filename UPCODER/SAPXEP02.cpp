#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) 
            return false;
    return n > 1;
}

void sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++)
            if (check(a[i]) && check(a[j]) && a[j] < a[i])
                swap(a[i], a[j]);
    }
}

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int &x : a) cin >> x;
    
    sort(a, n);
    for (int x : a) cout << x << " ";
    return 0;
}