#include <iostream>
#include <cmath>
using namespace std;

bool chinhPhuong(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    int sum = 0;
    for (int x : a) 
        if (chinhPhuong(x)) sum += x;

    cout << sum;
    return 0;
}