#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int w = 1, l = n;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            int j = n / i;
            if (j - i < l - w) {
                l = j;
                w = i;
            }
        }
    }
    
    cout << w << ' ' << l;
    return 0;
}