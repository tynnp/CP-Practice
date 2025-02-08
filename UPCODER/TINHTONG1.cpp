#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n; 
    cin >> n;
    double tong = 0;

    for (int i = 1; i <= n; i++)
        tong += 1/pow(i, 3);
    
    cout << fixed << setprecision(3) << tong;
    return 0;
}