#include <iostream>
using namespace std;

int sum(int n) {
    if (n < 10) return n;
    return n % 10 + sum(n / 10);
}

int main() {
    int x, n;
    bool bangX;
    int k = -2002;
    
    cin >> x;
    while (cin >> n) {
        int d = sum(n);
        
        if (x == d) {
            cout << n << ' ';
            bangX = true;
        }
        
        if (d < x) 
            k = max(k, n);
    }
    
    if (!bangX) {
        if (k != -2002) {
            cout << k;
        } else {
            cout << -1;
        }
    }
    
    return 0;
}