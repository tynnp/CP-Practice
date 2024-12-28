#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;
    
    void nhap() {
        cin >> tu >> mau;
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
    int n;
    cin >> n;
    
    PhanSo a[n];
    for (int i = 0; i < n; i++)
        a[i].nhap();
    
    PhanSo kq = a[0];
    for (int i = 1; i < n; i++) {
        if (kq.tu * a[i].mau > kq.mau * a[i].tu)
            kq = a[i];
    }
    
    kq.rutGon();
    kq.xuat();
    return 0;
}
