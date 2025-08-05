#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a = 0, b = 1, c = 0;
    
    if (n >= 1)
        cout << a << ' ';

    if (n >= 2) 
        cout << b << ' ';
    
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        cout << c << ' ';
    }

    return 0;
}