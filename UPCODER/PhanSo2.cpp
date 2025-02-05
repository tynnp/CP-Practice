#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

struct Array {
    int size;
    PhanSo data[100];
    PhanSo &operator [] (int idx);
};

int gcd(int a, int b);

istream &operator >> (istream &in, PhanSo &p);
ostream &operator << (ostream &out, PhanSo p);
bool operator == (PhanSo a, PhanSo b);
bool operator != (PhanSo a, PhanSo b);
PhanSo operator + (PhanSo a, PhanSo b);

istream &operator >> (istream &in, Array &arr);
ostream &operator << (ostream &out, Array arr);

int main() {
    Array arr;
    cin >> arr;
    cout << arr;
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
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

bool operator == (PhanSo a, PhanSo b) {
    return a.tu * b.mau == a.mau * b.tu;
}

bool operator != (PhanSo a, PhanSo b) {
    return !(a == b);
}

PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau + a.mau * b.tu;
    res.mau = a.mau * b.mau;
    return res;
}

PhanSo &Array::operator [] (int idx) {
    return data[idx];
}

istream &operator >> (istream &in, Array &arr) {
    arr.size = 0;
    while (in >> arr[arr.size]) arr.size++;
    return in;
}

ostream &operator << (ostream &out, Array arr) {
    PhanSo res = arr[0];

    for (int i = 1; i < arr.size; i++)
        res = res + arr[i];

    out << res;
    return out;
}
