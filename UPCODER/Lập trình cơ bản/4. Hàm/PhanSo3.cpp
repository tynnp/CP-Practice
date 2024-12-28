#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;
    
    istream& nhap() {
        return (cin >> tu >> mau);
    }
    
    void xuat() {
        cout << tu << '/' << mau;
    }
    
    void rutGon() {
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }
};

int main() {
    PhanSo a[100];
    int n = 0;
    
    while (a[n].nhap())
        n++;
    
    PhanSo kq = a[0];
    for (int i = 1; i < n; i++) {
        kq.tu = kq.tu * a[i].mau + kq.mau * a[i].tu;
        kq.mau = kq.mau * a[i].mau;
    }
    
    kq.rutGon();
    kq.xuat();
    return 0;
}
