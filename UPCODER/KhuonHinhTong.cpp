#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;
};

template <typename T>
struct Array {
    int size = 0;
    T data[100];
    void input();
    T sum();
};

int gcd(int a, int b);
istream& operator >> (istream &in, PhanSo &p);
ostream& operator << (ostream &out, PhanSo p);
PhanSo operator + (PhanSo a, PhanSo b);

int main() {
    char c; 
    Array<int> arrInt;
    Array<PhanSo> arrPhanSo;

    while (cin >> c) {
        if (c == 'a') arrInt.input();
        else if (c == 'b') arrPhanSo.input();
    }

    if (arrInt.size != 0) 
        cout << arrInt.sum() << endl;
    else 
        cout << "khong co" << endl;

    if (arrPhanSo.size != 0) 
        cout << arrPhanSo.sum() << endl;
    else 
        cout << "khong co" << endl;

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

istream& operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    if (p.mau < 0) 
        p.tu = -p.tu,
        p.mau = -p.mau;
    return in;
}

ostream& operator << (ostream &out, PhanSo p) {
    int ucln = gcd(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    out << p.tu << "/" << p.mau;
    return out;
}

PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu*b.mau + a.mau*b.tu;
    res.mau = a.mau * b.mau;
    return res;
}

template<typename T>
void Array<T>::input() {
    cin >> data[size];
    size++;
}

template<typename T>
T Array<T>::sum() {
    T res = data[0];
    for (int i = 1; i < size; i++)
        res = res + data[i];
    return res;
}