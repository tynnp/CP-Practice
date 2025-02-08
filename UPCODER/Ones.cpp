#include <bits/stdc++.h>
using namespace std;

int n, ans;

int main() {
    cin >> n;
    int base = 1, ans = 1;

    while (base % n) {
        base %= n;
        base = base * 10 + 1;
        ans++;
    }
    
    cout << ans;
    return 0;
}