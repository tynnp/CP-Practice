#include <iostream>
using namespace std;

long long fac(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++)    
        res *= i;
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << fac(n) / (fac(k) * fac(n - k));
    return 0;
}