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
}

PhanSo tinhTong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

void xuatPhanSo(PhanSo p) {
    if (p.mau != 0) {
        cout << p.tu << '/' << p.mau;
        return;
    }
    
    cout << -1;
}

int main() {
    PhanSo a, b;
    cin >> a.tu >> a.mau;
    cin >> b.tu >> b.mau;
    PhanSo c = tinhTong(a, b);
    xuatPhanSo(c);
    return 0;
}

