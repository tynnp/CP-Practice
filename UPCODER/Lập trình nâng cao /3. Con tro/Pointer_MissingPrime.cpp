#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int l, r, n = 0;
    int* a = new int[100];
    
    cin >> l >> r;
    
    for (int i = l; i <= r; i++) 
        if (snt(i)) 
            a[n++] = i;
        
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    delete[] a;
    return 0;
}
