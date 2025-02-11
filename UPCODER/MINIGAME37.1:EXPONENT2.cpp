#include <bits/stdc++.h>
using namespace std;

#define int int64_t

void binary(int n) {
    cout << "NO ";
    stack<int> s;
    
    while (n) {
        s.push(n % 2);
        n /= 2;
    }
    
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    
    cout << endl;
}

void power(int n) {
    if (n == 0) {
        cout << "NO " << 0;
        return;
    }
    
    cout << "YES ";
    int p = 0;
    
    while (n > 1) {
        p += 1;
        n /= 2;
    }
    
    cout << 2 << '^' << p << endl;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n, t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        if ((n & (n - 1)) == 0) power(n);
        else binary(n);
    }
    
    return 0;
}