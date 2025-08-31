#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, a, b, d1, d2, d3;
    cin >> a >> b >> d1 >> d2 >> d3 >> x;

    if (x <= a) 
        cout << "Số tiền điện phải trả là: " << x * d1 << " VNĐ";
    else if (x > b) 
        cout << "Số tiền điện phải trả là: " << a * d1 + (b - a) * d2 + (x - b) * d3 << " VNĐ";
    else 
        cout << "Số tiền điện phải trả là: " << a * d1 + (x - a) * d2 << " VNĐ";

    return 0;
}