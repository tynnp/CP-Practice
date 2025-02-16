#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;
};

void rutGon(PhanSo &p) {
    int ucln = __gcd(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    
    if (p.mau < 0) 
        p.tu = -p.tu, p.mau = -p.mau;
}

PhanSo tinhTong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

PhanSo tinhHieu(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau - a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

PhanSo tinhTich(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

PhanSo tinhThuong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    rutGon(kq);
    return kq;
}

void xuatPhanSo(PhanSo p) {
    cout << p.tu;
    if (p.tu != 0) 
        cout << "/" << p.mau;
    cout << endl;

}

int main() {
    PhanSo a, b;
    cin >> a.tu >> a.mau;
    cin >> b.tu >> b.mau;
    
    if (a.mau == 0 || b.mau == 0) {
        cout << -1;
    } else {
        xuatPhanSo(tinhTong(a, b));
        xuatPhanSo(tinhHieu(a, b));
        xuatPhanSo(tinhTich(a, b));
        
        if (b.tu != 0)
            xuatPhanSo(tinhThuong(a, b));
    }
    
    return 0;
}