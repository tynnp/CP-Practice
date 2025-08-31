#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n;

int sum(int n) {
    int res = 0;

    while (n > 0) {
        res += (n % 10) * (n % 10);
        n /= 10;
    }

    return res;
}

bool solve(int n) {
    set<int> s;

    while (n != 1 && !s.count(n)) {
        s.insert(n);
        n = sum(n);
    }
    
    return n == 1;
}

int32_t main() {
    cin >> n;
    cout << (solve(n) ? "true" : "false");
    return 0;
}