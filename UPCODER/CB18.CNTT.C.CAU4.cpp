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

int tongCSL(int n) {
    int res = 0;
    
    while (n != 0) {
        int d = n % 10;
        if (d % 2 != 0)
            res += d;
        n /= 10;
    }
    
    return res;
}

int main() {
    int a;
    cin >> a;
    
    int x = tongCSC(a);
    int y = tongCSL(a);
    
    cout << (x != 0 && y % x == 0 ? "YES" : "NO");
    return 0;
}