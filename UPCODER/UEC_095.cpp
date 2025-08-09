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
            cout << -1 << endl;
            return;
        }
        
        if (tu == 0) {
            cout << 0 << endl;
            return;
        }
        
        cout << tu << '/' << mau << endl;
    }
};

bool ssBang(PhanSo a, PhanSo b) {
    return a.tu * b.mau == a.mau * b.tu;
} 

int main() {
    PhanSo x;
    int n;
    cin >> n;

    PhanSo a[n];
    for (int i = 0; i < n; i++)
        a[i].nhap();

    x.nhap();

    for (int i = 0; i < n; i++) 
        if (ssBang(a[i], x))    
            cout << i << endl;

    return 0;
}