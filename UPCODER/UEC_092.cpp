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
            
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
            
        int g = gcd(tu, mau);
        tu /= g;
        mau /= g;
    }
    
    void xuat() {
        rutGon();
        
        if (tu == 0) {
            cout << 0 << endl;
            return;
        }
        
        cout << tu << '/' << mau << endl;
    }
};

PhanSo cong(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau + b.tu * a.mau;
    res.mau = a.mau * b.mau;
    res.rutGon();
    return res;
}

PhanSo tru(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau - b.tu * a.mau;
    res.mau = a.mau * b.mau;
    res.rutGon();
    return res;
}

PhanSo nhan(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.tu;
    res.mau = a.mau * b.mau;
    res.rutGon();
    return res;
}

PhanSo chia(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau;
    res.mau = a.mau * b.tu;
    res.rutGon();
    return res;
}

int main() {
    PhanSo a, b;
    a.nhap();
    b.nhap();
    
    if (a.mau == 0 || b.mau == 0) {
        cout << -1;
        return 0;
    }
    
    (cong(a, b)).xuat();
    (tru(a, b)).xuat();
    (nhan(a, b)).xuat();
    
    if (b.tu != 0)
        (chia(a, b)).xuat();
    else 
        cout << -1;
        
    return 0;
}