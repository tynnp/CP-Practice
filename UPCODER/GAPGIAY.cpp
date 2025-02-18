#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int ans = 0;
    while (a <= b) {
        ans++;
        a *= 2;
    }
    
    cout << ans - 1;
    return 0;
}