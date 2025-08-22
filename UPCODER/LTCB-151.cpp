#include <bits/stdc++.h>
using namespace std;
 
bool check(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i <= sqrt(n); i++) 
        if (n % i == 0) return false;
    return true;
} 

// 	1. Hãy tìm “số nguyên tố lớn nhất” trong mảng một chiều các số nguyên
// 	2.  Nếu mảng không có số nguyên tố thì trả về giá trị 0.

int main() {
    long long x, n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        x = a[i];
        if (check(x) && x > ans) ans = x;
    }

    cout << (ans == INT_MIN ? 0 : ans);
    return 0;
}