#include <bits/stdc++.h>
using namespace std;

// Sử dụng hàm đệ quy
long long calc(int n) {
    if (n == 0) return 0;
    return n * n + calc(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n);
    return 0;
}