#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    for (int i = a; i <= b; i++)
        if (prime(i))
            cout << i << '\n';
    
    return 0;
}