#include <iostream>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;

    if (n >= 0) {
        for (int i = 1; i <= n; i++)    
            res += i;
        cout << res; 
    } else 
        cout << "NHAP SAI";
    
    return 0;
}