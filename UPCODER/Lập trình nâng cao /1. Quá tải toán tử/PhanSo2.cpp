#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
    
    void rutGon() {
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }
};

struct Array {
    int size;
    PhanSo items[100];
    
    PhanSo &operator [] (int index) {
        return items[index];
    }
};

istream &operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    p.rutGon();
    return in;
}

istream &operator >> (istream &in, Array &arr) {
    arr.size = 0;
    
    while (in >> arr[arr.size]) 
        arr.size++;
    
    return in;
}

ostream &operator << (ostream &out, PhanSo p) {
    p.rutGon();
    out << p.tu << '/' << p.mau;
    return out;
}

PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau + b.tu * a.mau;
    res.mau = a.mau * b.mau;
    res.rutGon();
    return res;
}

ostream &operator << (ostream &out, Array arr) {
    PhanSo sum = arr[0];
    
    for (int i = 1; i < arr.size; i++)
        sum = sum + arr[i];
        
    out << sum;
    return out;
}

bool operator == (PhanSo a, PhanSo b) {
    return a.tu * b.mau == b.tu * a.mau;
}

bool operator != (PhanSo a, PhanSo b) {
    return !(a == b);
}

int main() {
    Array arr;
    cin >> arr;
    cout << arr;
    return 0;
}
