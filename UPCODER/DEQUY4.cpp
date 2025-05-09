#include <iostream>
#include <cmath>
using namespace std;

long long sum(int n, int x) {
    if (n == 0) return 1;
    return pow(x, n) + sum(n-1, x);
}

int main() {
    int n, x;
    cin >> n >> x;
    cout << sum(n, x);
    return 0;   
}