#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false;
    return n > 1;
}

bool div3(string s) {
    int tong = 0;
    for (char c : s)
        tong += (c - '0');
    return tong % 3 == 0;
}

bool check(string s) {
    int len = s.size();

    if (len > 1) {
        int k = (s[len - 2] - '0') * 10 + (s[len - 1] - '0');

        if (k % 2 != 0 && k % 5 != 0) {
            if (div3(s)) 
                return false;
            else 
                return true;
        } 
        
        return false;
        
    }

    return prime(s[0] - '0');
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        cout << (check(s) ? "YES\n" : "NO\n");
    }

    return 0;
}