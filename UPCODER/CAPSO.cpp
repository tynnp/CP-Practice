#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, d, e, f;
    cout << fixed << setprecision(0);

    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;
        if (b - a == c - b) {
            d = c + (c - b);
            e = d + (d - c);
            f = e + (e - d);
            cout << "CSC " << a << " " << b << " " << c << " "  << d << " "  << e << " "  << f << " = " << a + b + c + d + e + f << endl;
        
        } else if (b / a == c / b){
            d = c * (c / b);
            e = d * (d / c);
            f = e * (e / d);
            cout << "CSN " << a << " " << b << " " << c << " "  << d << " "  << e << " "  << f << " = " << a + b + c + d + e + f << endl;
        
        }
        else cout << "khong phai CAP SO" << endl;
    }

    return 0;
}