#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++)
            if (a[min] > a[j]) min = j;
        swap(a[i], a[min]);
    }
}

int main() {
    int n = 0, a[1001];
    while (cin >> a[n]) n++;
    
    selectionSort(a, n);
    
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    return 0;
}