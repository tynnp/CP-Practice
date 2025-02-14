#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct PhanSo {
    int tu, mau;

    void rutGon() {
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;

        if (mau < 0) 
            tu = -tu,
            mau = abs(mau);
    }
};

istream& operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    p.rutGon();
    return in;
}

ostream& operator << (ostream &out, PhanSo p) {
    if (p.tu < 0) out << "-";
    out << abs(p.tu) << "/" << p.mau;
    return out;
}

struct SoPhuc {
    int thuc, ao;
};

istream& operator >> (istream &in, SoPhuc &sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

ostream& operator << (ostream &out, SoPhuc sp) {
    if (sp.thuc != 0) out << sp.thuc;

    if (sp.ao != 0) {
        if (sp.ao > 0 && sp.thuc != 0) out << "+";
        if (sp.ao < 0) out << "-";
        if (abs(sp.ao) != 1) 
            out << abs(sp.ao);
        out << "i";
    } 
    
    if (sp.thuc == 0 && sp.ao == 0) out << 0;
    
    return out;
}

SoPhuc operator + (SoPhuc a, SoPhuc b) {
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

SoPhuc operator + (SoPhuc p, int x) {
    SoPhuc res;
    res.thuc = p.thuc + x;
    res.ao = p.ao;
    return res;
}

SoPhuc operator + (SoPhuc sp, PhanSo p) {
    SoPhuc res;
    res.thuc = sp.thuc + p.tu;
    res.ao = sp.ao + p.mau;
    return res;
}

int main() {
    char c; 
    SoPhuc x; 
    cin >> x >> c;

    cout << x << endl;

    int i; 
    SoPhuc z; 
    PhanSo p;

    if (c == 'i') {
        cin >> i;
        cout << i << endl;
        cout << x + i;

    } else if (c == 'z') {
        cin >> z;
        cout << z << endl;
        cout << x + z;
        
    } else if (c == 'p') {
        cin >> p;
        cout << p << endl;
        cout << x + p;
    }

    return 0;
}