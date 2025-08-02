#include <iostream>
using namespace std;

int main() {
    long long n, s;
    cin >> n >> s;
    
    if (9 * n < s) {
        cout << -1;
        return 0;
    }
    
    for (int i = 9; i >= 0 && n > 0; i--) {
        if (s >= i) {
            cout << i;
            s -= i;
            
        } else {
            cout << s;
            s = 0;
        }
        
        n--;
    }
    
    return 0;
}