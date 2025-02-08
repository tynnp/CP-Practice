#include <bits/stdc++.h>
using namespace std;

#define MAXN 105
int64_t n, a[MAXN];

int main() {
    a[2] = 1;
    
    for (int i = 3; i <= 100; i++)
        a[i] = a[i-1] + a[i-2] + a[i-3];
    
    while (cin >> n) {
        int k = 0;
        while (a[k] < n) k++;
        cout << a[k] << '\n';
    }
    
    return 0;
}