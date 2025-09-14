#include <bits/stdc++.h>
using namespace std;

int soDau(int n) {
    int k = n / pow(10, int(log10(n)));
    return k;
}

int soCuoi(int n) {
    return n % 10;
}

int a, b;

int main() {
    cin >> a >> b;
    cout << (soDau(a) == soCuoi(b) || soCuoi(a) == soDau(b) ? "YES" : "NO");
    return 0;
}