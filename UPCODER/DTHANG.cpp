#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct DuongThang {
    int a, b, c;
};

struct PhanSo {
    int tu, mau;

    void rutGon() {
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;

        if (mau < 0)  
            mau = -mau,
            tu = -tu;
    }
};

istream& operator >> (istream &in, DuongThang &dt) {
    in >> dt.a >> dt.b >> dt.c;
    return in;
}

ostream& operator << (ostream &out, DuongThang dt) {
    if (dt.a != 0) {
        if (dt.a < 0) out << "-";
        if (abs(dt.a) != 1) out << abs(dt.a);
        out << "x";
    }

    if (dt.b != 0) {
        if (dt.b > 0 && dt.a != 0) out << " + ";
        if (dt.b < 0 && dt.a != 0) out << " - ";
        if (dt.b < 0 && dt.a == 0) out << "-";
        if (abs(dt.b) != 1) out << abs(dt.b);
        out << "y";
    }

    if (dt.c != 0) {
        if (dt.c > 0) out << " + " << dt.c;
        if (dt.c < 0) out << " - " << -dt.c;
    }

    out << " = 0";
    return out;
}

bool operator == (DuongThang x, DuongThang y) {
    return x.a == y.a && x.b == y.b && x.c == y.c;
}

ostream& operator << (ostream &out, PhanSo ps) {
    out << ps.tu << "/" << ps.mau;
    return out;
}

double operator * (PhanSo p, int x) {
    return (double) p.tu * x / p.mau;
}

char viTriTuongDoi(int D, int Dx, int Dy, int Dv) {
    if (Dv == 0) return 'V';
    if (D != 0) return 'C';
    else {
        if (Dx == Dy && Dy == 0) return 'T';
        if (Dx != 0 && Dy != 0) return 'S';
    }
}

void xuat(DuongThang dt1, DuongThang dt2) {
    dt1.c = -dt1.c;
    dt2.c = -dt2.c;
    int D = dt1.a*dt2.b - dt2.a*dt1.b;
    int Dx = dt1.c*dt2.b - dt2.c*dt1.b;
    int Dy = dt1.a*dt2.c - dt2.a*dt1.c;
    int Dv = dt1.a*dt2.a + dt1.b*dt2.b;

    char viTri = viTriTuongDoi(D, Dx, Dy, Dv);
    cout << viTri << endl;

    if (viTri == 'C' || viTri == 'V') {
        PhanSo x, y;
        x.tu = Dx; x.mau = D; x.rutGon();
        y.tu = Dy; y.mau = D; y.rutGon();

        cout << "(";
        if (x.tu % x.mau == 0) cout << x.tu / x.mau;
        else cout << x;
        cout << ", ";

        if (y.tu % y.mau == 0) cout << y.tu / y.mau;
        else cout << y;
        cout << ")";

    } else if (viTri == 'S') {
        int x = 1;
        double y = (double) (-dt2.c - dt2.a*x) / dt2.b;
        double khoangCach = abs(dt1.a*x + dt1.b*y + dt1.c) / sqrt(dt1.a*dt1.a + dt1.b*dt1.b);
        cout << roundf(khoangCach * 1000) / 1000;

    } else if (viTri == 'T') cout << 0;
}

int main() {
    DuongThang dt1, dt2; 
    cin >> dt1 >> dt2;

    cout << dt1 << endl;
    cout << dt2 << endl;
    
    xuat(dt1, dt2);
    return 0;
}