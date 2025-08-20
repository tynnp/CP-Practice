#include <bits/stdc++.h>
using namespace std;

//1. Nhập số nguyên dương n
//2. Nếu n không hợp lệ in ra -1

int main() {
    long long n, S = 0; 
    cin >> n;

    if (n < 1) {
        cout << -1; 
        return 0;
    }

    while (n) {
        S += n * n;
        n--;
    }

    cout << S;
    return 0;
}