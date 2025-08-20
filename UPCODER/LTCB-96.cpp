//x nhập vào là số thực và kết quả làm tròn đến chữ số thập phân thứ 2
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double x; 
    cin >> x;

    cout << fixed << setprecision(2);
    if (x < 5) 
        cout << -2*pow(x,2) + 4*x - 9;
    else 
        cout << 2*pow(x, 2) + 5*x + 9;

    return 0;
}