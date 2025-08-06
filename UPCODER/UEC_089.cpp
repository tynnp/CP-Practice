#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = n; i >= k; i--) 
        a[i] = a[i - 1];

    a[k] = x;
    n += 1;

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}