#include <iostream>
using namespace std;

int main() {
    int idx, n = 0;
    int a[100];
    
    cin >> idx;
    while (cin >> a[n]) n++;
    
    n -= 1;
    for (int i = idx; i < n; i++)
        a[i] = a[i+1];
        
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}