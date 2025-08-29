#include <bits/stdc++.h>
using namespace std;

long long calc(long long n, long long x) {
    if (x == 1) return n;
    return pow(n, x) + calc(n, x - 1);
} 

int main() {
    long long n, x;
    cin >> x >> n;
    cout << calc(n, x);
    return 0;
}