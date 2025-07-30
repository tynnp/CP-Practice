#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i < n; i++) 
        if (n % i == 0)
            return false;
    return n > 1;
}

int sum(int n) {
    int res = 0;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    for (int i = a; i <= b; i++) 
        if (snt(sum(i)))
            cout << i << ' ';
    
    return 0;
}