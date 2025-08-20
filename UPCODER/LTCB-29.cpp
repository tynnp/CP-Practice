#include <iostream>
using namespace std;

int main() {
    int n, ans = 0; 
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && (n/i) % 2 != 0) {
            ans = n/i; 
            break;
        }
    }
    
    cout << ans;
    return 0;
}