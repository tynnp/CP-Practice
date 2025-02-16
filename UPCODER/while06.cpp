#include <iostream>
using namespace std;
 
int main() {
    int64_t n; 
    cin >> n;

    int64_t m = n, x = 0;

    while (m) {
        x = x*10 + m % 10, 
        m /= 10;
    }
    
    cout << n + x;
    return 0;
}