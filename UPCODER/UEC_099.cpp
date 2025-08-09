#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct ToaDo {
    int x, y;

    void nhap() {
        cin >> x >> y;
    }
    
    void xuat(string ktc = " ") {
        cout << "(" << x << ", " << y << ")" << ktc;
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
    
    double calc, kc = 0;
    ToaDo x, y;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            calc = khoangCach(a[i], a[j]);
            if (calc > kc)
                x = a[i], y = a[j], kc = calc;
        }
    }

    x.xuat();
    y.xuat("\n");
    cout << fixed << setprecision(4) << kc;
    return 0;
}