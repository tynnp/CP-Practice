#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    float a[n];
    for (float &x : a) cin >> x;
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j-1] >= a[j]) 
            swap(a[j-1], a[j]), j--;
    }

    for (float x : a) 
        cout << x << " ";
    return 0;
}