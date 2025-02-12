#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, k;
    cin >> n;
    k = log2(n);
    cout << pow(2, k);
    return 0;
}