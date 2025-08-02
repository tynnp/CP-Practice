#include <iostream>
using namespace std;
 
int main() {
    int t, n, h, m; 
    cin >> t;

    while (t--) {
        cin >> n;
        h = 8 + n / 60;
        m = n % 60;

        if (h < 10) cout << 0;
        cout << h << ":";
        
        if (m < 10) cout << 0;
        cout << m << endl;
    }
    
    return 0;
}