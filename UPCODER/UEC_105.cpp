#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "N phai la so nguyen duong";
        return 0;
    }
    
    long long res = 1;
    for (int i = 2; i <= n; i++)
        if (i % 3 != 0)
            res *= i;
            
    cout << res;
    return 0;
}