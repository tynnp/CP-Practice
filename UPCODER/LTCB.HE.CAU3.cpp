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

int snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

struct PhanSo {
    int tu, mau;

    void nhap() {
        cin >> tu >> mau;
    }
    
    void xuat() {
        cout << tu << '/' << mau << ' ';
    }
};

int n;
PhanSo a[1000];

void nhapXuat() {
    cin >> n;
    
    for (int i = 0; i < n; i++)
        a[i].nhap();
        
    for (int i = n - 1; i >= 0; i--)
        a[i].xuat();
    cout << endl;
}

void xuatTuMau() {
    PhanSo tuNho = a[0];
    for (int i = 1; i < n; i++)
        if (tuNho.tu > a[i].tu)
            tuNho = a[i];
    
    PhanSo mauLon = a[0];
    for (int i = 1; i < n; i++)
        if (mauLon.mau < a[i].mau)
            mauLon = a[i];
            
    tuNho.xuat();
    mauLon.xuat();
    cout << endl;
}

void tuSolaSNT() {
    int res = 0;
    for (int i = 0; i < n; i++)
        res += snt(a[i].tu);
    cout << res << endl;
}

void tuMaulaSNTCN() {
    int res = 0;
    for (int i = 0; i < n; i++)
        res += gcd(a[i].tu, a[i].mau) == 1;
    cout << res;
}

int main() {
    nhapXuat();
    xuatTuMau();
    tuSolaSNT();
    tuMaulaSNTCN();
    return 0;
}