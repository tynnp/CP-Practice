#include <iostream>
using namespace std;

long long pow(long long x, long long n) {
    if (n == 0) 
        return 1;
    return x * pow(x, n - 1);
}

long long calc(long long x, long long n) {
    if (n == 0) 
        return 1;
    return pow(x, n) + calc(x, n - 1);
}

int main() {
    long long x, n;
    cin >> x >> n;
    cout << calc(x, n);
    return 0;
}