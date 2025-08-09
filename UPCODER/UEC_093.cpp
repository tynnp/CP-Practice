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
    
    void nhap(int t, int m) {
        tu = t;
        mau = m;
        
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

int main() {
    int t, m, n = 0;
    PhanSo a[100];

    while (cin >> t >> m) {
        a[n].nhap(t, m);
        n++;
    }

    for (int i = 0; i < n; i++) 
        a[i].xuat();

    return 0;
}