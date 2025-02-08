#include <bits/stdc++.h>
using namespace std;

#define int long long

int t, n;

int32_t main() {  
    cin >> t;

    while (t--) {
        cin >> n;
        bool found = false;  
        int a, k;
        
    
        for (k = 2; k * (k + 1) <= 2 * n; k++) {
            if ((2 * n) % k != 0)
                continue;
        
            int x = (2 * n) / k - (k - 1);
       
            if (x > 0 && x % 2 == 0) {
                a = x / 2;
                found = true;
                break;  
            }
        }
        
        if (!found) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        cout << n << " = " << a;
        for (int j = 1; j < k; j++) 
            cout << " + " << (a + j);
        cout << "\n";
    }
    
    return 0;
}
