#include <bits/stdc++.h>
using namespace std;

#define int int64_t

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

bool check(int n) {
    int sum = 0;
    
    while (n) {
        if (!prime(n % 10)) return false;
        sum += n % 10;
        n /= 10;
    }
    
    return prime(sum);
}

int32_t main() {
    int n;
    cin >> n;
    cout << (check(n) ? "YES" : "YESNOT");
    return 0; 
}