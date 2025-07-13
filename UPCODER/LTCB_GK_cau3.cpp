#include <bits/stdc++.h>
using namespace std;
 
bool soNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, k = 0; cin >> n;
    for (int i = 2; i <= n; i++) {
        if (soNguyenTo(i)) cout << i << " "; k++;
    }
    if (!k) cout << -1;
    return 0;
}