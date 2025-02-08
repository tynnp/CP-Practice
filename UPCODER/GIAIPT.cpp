#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << fixed << setprecision(4);
    double a, b, c; 
    cin >> a >> b >> c;
    
    if (a == 0) {
        if (b == 0) cout << (c == 0 ? "VSN" : "VN");
        else cout << ((-1.0*c)/b == 0 ? 0.0 : (-1.0*c)/b);
    } else {
        double delta = b*b - 4*a*c;
        if (delta < 0) cout << "VN";
        else if (delta == 0) cout << (-1.0*b/(2*a) == 0 ? 0.0 :-1.0*b/(2*a));
        else {
            double x1 = (double) (-1.0*b + sqrt(delta)) / (2*a);
            double x2 = (double) (-1.0*b - sqrt(delta)) / (2*a);
            if (x1 > x2) swap(x1, x2);
            cout << (x1 == 0 ? 0.0 : x1) << endl << (x2 == 0 ? 0.0 : x2);
        } 
    }   
    
    return 0;
}