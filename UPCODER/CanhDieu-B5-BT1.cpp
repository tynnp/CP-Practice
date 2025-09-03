#include <bits/stdc++.h>
using namespace std;

int main() {
    double h;
    cin >> h;
    
    if (h < 0) 
        cout << "Không hợp lệ";
    else 
        cout << fixed << setprecision(2) << sqrt(2 * 9.8 * h);
    
    return 0;
}