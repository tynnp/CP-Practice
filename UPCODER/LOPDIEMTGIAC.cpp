#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    int x, y;

public:
    Diem() {
        x = y = 0;
    }

    Diem(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Diem(const Diem &other) {
        x = other.x;
        y = other.y;
    }

    friend istream &operator >> (istream &in, Diem &d) {
        in >> d.x >> d.y;
        return in;
    }
    
    friend ostream &operator << (ostream &out, Diem d) {
        out << "(" << d.x << ',' << d.y << ")";
        return out;
    }

    bool operator == (Diem other) {
        return x == other.x && y == other.y;
    }

    double tinhKhoangCach(Diem other) {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};

class TamGiac {
private:
    Diem a, b, c;

public:
    TamGiac() {}
    TamGiac(Diem a, Diem b, Diem c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    TamGiac(const TamGiac &other) {
        a = other.a;
        b = other.b;
        c = other.c;
    }

    friend istream &operator >> (istream &in, TamGiac &t) {
        in >> t.a >> t.b >> t.c;
        return in;
    }
    
    friend ostream &operator << (ostream &out, TamGiac t) {
        out << t.a << t.b << t.c;
        return out;
    }
    
    double chuVi() {
        double AB = a.tinhKhoangCach(b);
        double AC = a.tinhKhoangCach(c);
        double BC = b.tinhKhoangCach(c);
        return AB + AC + BC;
    }

    double operator + (TamGiac other) {
        return chuVi() + other.chuVi();
    }
    
    bool operator < (TamGiac other) {
        return chuVi() < other.chuVi();
    }
    
    bool operator == (TamGiac other) {
        if (
            (a == other.a || a == other.b || a == other.c) &&
            (b == other.a || b == other.b || b == other.c) &&
            (c == other.a || c == other.b || c == other.c)
        ) return true;
        
        return false;
    }
};

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