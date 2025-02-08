#include <iostream>
using namespace std;

int main() {
    int n, m, tong = 0, tich = 1; 
    cin >> n >> m;

    while (n > 0) 
        tich *= n%10, n /= 10;

    for (int i = 1; i <= m; i++)
        if (m % i == 0) tong += i;
   
    cout << (tong == tich ? "YES" : "NO");
    return 0;
}