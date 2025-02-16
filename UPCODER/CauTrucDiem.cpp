#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

struct Diem {
    int x, y;  
    void nhap();
    void xuat();
};

double tinhDoDai(Diem a, Diem b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double chuVi(Diem a, Diem b, Diem c) {
    double AB = tinhDoDai(a, b);
    double BC = tinhDoDai(b, c);
    double CA = tinhDoDai(c, a);
    return AB + BC + CA;
}

double dienTich(Diem a, Diem b, Diem c) {
    double AB = tinhDoDai(a, b);
    double BC = tinhDoDai(b, c);
    double CA = tinhDoDai(c, a);
    double p = chuVi(a, b, c)/2;
    return sqrt(p * (p-AB) * (p-BC) * (p-CA));
}

int main() {
    Diem a, b, c;
    a.nhap();
    b.nhap();
    c.nhap();
    
    a.xuat();
    b.xuat();
    c.xuat();
    cout << endl;
    
    cout << fixed << setprecision(3);
    cout << tinhDoDai(a, b) << endl;
    cout << tinhDoDai(a, c) << endl;
    cout << tinhDoDai(b, c) << endl;
    
    double cv = chuVi(a, b, c);
    double dt = dienTich(a, b, c);
    
    if (dt <= 0.0001) 
        cout << -1;
    else 
        cout << dt << ' ' << cv;
    
    return 0;
}

void Diem::nhap() {
    cin >> x >> y;
}

void Diem::xuat() {
    cout << '(' << x << ',' << y << ')' << ' ';
}