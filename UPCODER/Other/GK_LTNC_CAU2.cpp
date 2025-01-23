#include <bits/stdc++.h>
using namespace std;

const double E = 1e-6;

struct Diem {
    double x, y;
};

istream &operator >> (istream &in, Diem &d) {
    in >> d.x >> d.y;
    return in;
}

ostream &operator << (ostream &out, Diem d) {
    out << "(" << d.x << "," << d.y << ")";
}

double operator + (Diem u, Diem v) {
    return sqrt(pow(u.x - v.x, 2) + pow(u.y - v.y,2));
}

bool kiemTraTamGiac(double AB, double AC, double BC) {
    return AB + BC > AC && AB + AC > BC && AC + BC > AB;
}

bool tamGiacVuong(double AB, double AC, double BC) {
    return (abs(AB*AB + AC*AC - BC*BC) < E || abs(AB*AB + BC*BC - AC*AC) < E || abs(AC*AC + BC*BC - AB*AB) < E);
}

char timGocVuong(double AB, double AC, double BC) {
    if (abs(AB*AB + AC*AC - BC*BC) < E) return 'A';
    if (abs(AB*AB + BC*BC - AC*AC) < E) return 'B';
    if (abs(AC*AC + BC*BC - AB*AB) < E) return 'C';
}

int main() {
    Diem a, b, c;
    cin >> a >> b >> c;
    cout << a << ',' << b << ',' << c << endl;
    
    double AB = a + b;
    double AC = a + c;
    double BC = b + c;
    
    if (kiemTraTamGiac(AB, AC, BC)) {
        cout << "CO\n";
        
        if (tamGiacVuong(AB, AC, BC)) {
            cout << timGocVuong(AB, AC, BC);
        }
        
    } else {
        cout << "KHONG\n";
    }
    
    return 0;
}


