#include <iostream>
using namespace std;

struct BacNhat {
    int a, b;

    void nhap() {
        cin >> a >> b;
    }

    void xuat() {
        cout << a << "x";
        if (b > 0) cout << "+";
        cout << b;
    }

    int giaTri(int x) {
        return a*x + b;
    }
};

BacNhat congBacNhat(BacNhat x, BacNhat y) {
    BacNhat res;
    res.a = x.a + y.a;
    res.b = x.b + y.b;
    return res;
}

bool soSanh(BacNhat x, BacNhat y) {
    return (x.a + x.b) == (y.a + y.b);
}

int main() {
    BacNhat a, b;
    int x;

    a.nhap();
    b.nhap();
    cin >> x;

    a.xuat(); cout << endl;
    b.xuat(); cout << endl;

    BacNhat c = congBacNhat(a, b);
    a.xuat(); cout << "+";
    b.xuat(); cout << "=";
    c.xuat(); cout << endl;

    cout << a.giaTri(x) << endl;
    cout << b.giaTri(x) << endl;

    cout << (soSanh(a, b) ? "TRUE" : "FALSE");
    return 0;
}