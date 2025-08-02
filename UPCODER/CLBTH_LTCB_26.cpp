#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    int sum = 0;
    for (int i = l; i <= r; i++)
        sum += a[i];
    
    cout << sum;
    return 0;
}