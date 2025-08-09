#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct ToaDo {
    int x, y;

    void nhap() {
        cin >> x >> y;
    }
};

double khoangCach(ToaDo a, ToaDo b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double dienTich(ToaDo a, ToaDo b, ToaDo c) {
    return 0.5 * abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));
}


int main() {
    ToaDo a, b, c;
    a.nhap();
    b.nhap();
    c.nhap();
    double dt = dienTich(a, b, c);
    
    if (dt == 0) 
        cout << "Khong phai tam giac";
    else {
        double AB = khoangCach(a, b);
        double BC = khoangCach(b, c);
        double AC = khoangCach(a, c);
        cout << fixed << setprecision(2) << AB + BC + AC;
    }
        
    return 0;
}