#include <iostream>
using namespace std;

bool nguyenTo(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) 
            return false;
    return n > 1;
}

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    int sum = 0;
    for (int x : a)
        if (nguyenTo(x)) sum += x;
    
    cout << sum;
    return 0;
}