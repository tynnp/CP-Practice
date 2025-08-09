#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct ToaDo {
    int x, y;

    void nhap() {
        cin >> x >> y;
    }
    
    void xuat() {
        cout << "(" << x << ", " << y << ")";
    }
};

double khoangCach(ToaDo a, ToaDo b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    int n;
    cin >> n;
    
    ToaDo a[1000];
    for (int i = 0; i < n; i++)
        a[i].nhap();
    
    ToaDo res, goc;
    res.x = res.y = 0;
    goc.x = goc.y = 0;

    for (int i = 0; i < n; i++) 
        if (khoangCach(res, goc) < khoangCach(a[i], goc))
            res = a[i];
    
    res.xuat();
    return 0;
}