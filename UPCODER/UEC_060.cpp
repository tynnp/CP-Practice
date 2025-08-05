#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k = 2;
    bool first = true;
    
    while (n != 1) {
        if (k*k > n) break;
        int cnt = 0;
        
        while (n % k == 0) {
            cnt++;
            n /= k;
        }
        
        if (cnt) {
            if (!first) cout << " x ";
            cout << k << "^" << cnt;
            first = false;
        }
        
        k++;
    }
    
    if (n != 1) {
        if (!first) cout << " x ";
        cout << n << "^1";
    }

    return 0;
}