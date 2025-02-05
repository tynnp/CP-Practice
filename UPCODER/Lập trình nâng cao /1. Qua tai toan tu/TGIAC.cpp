#include <bits/stdc++.h>
using namespace std;

struct Diem {
    int x, y;
};

double tinhKhoangCach(Diem u, Diem v) {
    return sqrt(pow(u.x - v.x, 2) + pow(u.y - v.y, 2));
}

struct TamGiac {
    Diem a, b, c;
    
    double chuVi() {
        double AB = tinhKhoangCach(a, b);
        double AC = tinhKhoangCach(a, c);
        double BC = tinhKhoangCach(b, c);
        return AB + AC + BC;
    }
};

istream &operator >> (istream &in, Diem &d) {
    in >> d.x >> d.y;
    return in;
}

istream &operator >> (istream &in, TamGiac &t) {
    in >> t.a >> t.b >> t.c;
}

ostream &operator << (ostream &out, Diem d) {
    out << "(" << d.x << ',' << d.y << ")";
    return out;
}

ostream &operator << (ostream &out, TamGiac t) {
    out << t.a << t.b << t.c;
    return out;
}

bool operator == (Diem u, Diem v) {
    return u.x == v.x && u.y == v.y;
}

double operator + (TamGiac tga, TamGiac tgb) {
    return tga.chuVi() + tgb.chuVi();
}

bool operator < (TamGiac tga, TamGiac tgb) {
    return tga.chuVi() < tgb.chuVi();
}

bool operator == (TamGiac tga, TamGiac tgb) {
    if (
        (tga.a == tgb.a || tga.a == tgb.b || tga.a == tgb.c) &&
        (tga.b == tgb.a || tga.b == tgb.b || tga.b == tgb.c) &&
        (tga.c == tgb.a || tga.c == tgb.b || tga.c == tgb.c)
    ) return true;
    
    return false;
}

int main() {
    TamGiac tga, tgb;
    cin >> tga >> tgb;
    cout << tga << endl << tgb << endl;
    
    if (tga < tgb) {
        cout << "TRUE\n";
    } else {
        cout << "FALSE\n";
    }
    
    if (tga == tgb) {
        cout << "TRUE\n";
    } else {
        cout << "FALSE\n";
    }
    
    return 0;
}
