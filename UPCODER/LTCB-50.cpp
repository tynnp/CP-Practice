#include <bits/stdc++.h>
using namespace std;
  
int main() {
    int n, a[1000], k = 0; 
    cin >> n;

    while (n) {
        a[k] = n % 10; 
        n /= 10; 
        k++; 
    }

    for (int i = 0; i < k; i++) 
        cout << a[i];

    return 0;
}