#include <iostream>
using namespace std;

int tongCSC(int n) {
    int res = 0;
    
    while (n != 0) {
        int d = n % 10;
        if (d % 2 == 0)
            res += d;
        n /= 10;
    }
    
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    int x = tongCSC(a);
    int y = tongCSC(b);
    
    if (x > y)  
        cout << 1;
    else if (x < y)
        cout << -1;
    else 
        cout << 0;
    
    return 0;
}