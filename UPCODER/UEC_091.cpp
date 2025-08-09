#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

struct PhanSo {
    int tu, mau;
    
    void nhap() {
        cin >> tu >> mau;
        
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }
    
    void rutGon() {
        if (tu == 0 || mau == 0) 
            return;
            
        int g = gcd(tu, mau);
        tu /= g;
        mau /= g;
    }
    
    void xuat() {
        rutGon();
        
        if (mau == 0) {
            cout << -1;
            return;
        }
        
        if (tu == 0) {
            cout << 0;
            return;
        }
        
        cout << tu << '/' << mau;
    }
};

int main() {
    PhanSo p;
    p.nhap();
    p.xuat();
    return 0;
}