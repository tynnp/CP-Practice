#include <iostream>
using namespace std;

int main () {
    int idx, val;
    int n = 0, a[105];
    
    cin >> idx >> val;
    while (cin >> a[n]) n++;
    
    for (int i = n; i >= idx; i--)
        a[i] = a[i-1];
        
    a[idx] = val;
    n += 1;
    
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}