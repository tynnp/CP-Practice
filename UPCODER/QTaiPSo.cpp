#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int gcd(int a, int b);
istream &operator >> (istream &in, PhanSo &p);
ostream &operator << (ostream &out, PhanSo p);
PhanSo operator + (PhanSo a, PhanSo b);
bool operator == (PhanSo a, PhanSo b);
bool operator != (PhanSo a, PhanSo b);

int main() {
    PhanSo a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    
    return a;
}

istream &operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    return in;
}

ostream &operator << (ostream &out, PhanSo p) {
    int u = gcd(p.tu, p.mau);
    p.tu /= u; 
    p.mau /= u;
    out << p.tu << '/' << p.mau;
    return out;
}

PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau + b.tu * a.mau;
    res.mau = a.mau * b.mau;
    return res;
}

bool operator == (PhanSo a, PhanSo b) {
    return a.tu * b.mau == b.tu * a.mau;
}

bool operator != (PhanSo a, PhanSo b) {
    return !(a == b);
}