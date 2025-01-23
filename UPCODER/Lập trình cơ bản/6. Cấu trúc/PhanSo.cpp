#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
    void nhap();
    void xuat();
    void rutGon();
};

int main() {
    int n;
    cin >> n;
    
    PhanSo p[n];
    for (int i = 0; i < n; i++)
        p[i].nhap();
        
    PhanSo kq = p[0];
    for (int i = 1; i < n; i++)
        if ((float) kq.tu / kq.mau > (float) p[i].tu / p[i].mau)
            kq = p[i];
            
    kq.xuat();
    return 0;
}

void PhanSo::nhap() {
    cin >> tu >> mau;
    rutGon();
}

void PhanSo::xuat() {
    cout << tu << '/' << mau;
}

void PhanSo::rutGon() {
    int ucln = __gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
}
