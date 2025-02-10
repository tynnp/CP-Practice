#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt, k = 2;
    bool check = false;
    cin >> n;
    
    while (n > 1) {
        cnt = 0;
        
        while (n % k == 0) {
            cnt++;
            n /= k;
        }
        
        if (cnt) {
            if (check) cout << '*';
            cout << k << '^' << cnt;
            check = true;
        }
        k += k == 2 ? 1 : 2;
    }
    
    return 0;
}