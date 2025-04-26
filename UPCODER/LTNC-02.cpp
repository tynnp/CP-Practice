#include <iostream>
using namespace std;

int fac(int n) {
    if (n == 1) 
        return 1;
    return n * fac(n - 1);
}

int sum(int n) {
    if (n == 1)
        return 1;
    return fac(n) + sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}