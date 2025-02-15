#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int* a = new int[100];
    
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    delete[] a;
    return 0;
}