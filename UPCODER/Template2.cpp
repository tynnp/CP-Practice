#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;
};

template <typename T>
struct Array {
    int size;
    T data[100];

    void input();
    T tinhTong();
};

int gcd(int a, int b);
istream &operator >> (istream &in, PhanSo &p);
ostream &operator << (ostream &out, PhanSo p);
PhanSo operator + (PhanSo a, PhanSo b);

int main() {
    char c; 
    cin >> c;

    if (c == 'a') {
        Array<int> array;
        array.input();
        cout << array.tinhTong();

    } else if (c == 'b') {
        Array<PhanSo> array;
        array.input();
        cout << array.tinhTong();
    }
    
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
        p.tu = -p.tu, p.mau = -p.mau;

    return in;
}

ostream& operator << (ostream &out, PhanSo p) {
    int u = gcd(p.tu, p.mau);
    p.tu /= u, 
    p.mau /= u;

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
    this->size = 0;
    T n;
    while (cin >> n) 
        this->data[this->size++] = n;
}

template<typename T>
T Array<T>::tinhTong() {
    T res = this->data[0];
    for (int i = 1; i < this->size; i++)
        res = res + this->data[i];
    return res;
}