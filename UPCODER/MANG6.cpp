#include <iostream>
#include <cmath>
using namespace std;

bool nguyenTo(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

bool chinhPhuong(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    for (int x : a) 
        if (chinhPhuong(x)) cout << x << " "; cout << endl;
    
    for (int x : a) 
        if (nguyenTo(x)) cout << x << " "; 

    return 0;
}