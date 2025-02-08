#include <iostream>
#include <cmath>
using namespace std;

struct Diem {
    int x, y;
    void nhap();
    void xuat();
};

double khoangCach(Diem a, Diem b);
bool trungNhau(Diem a, Diem b);

struct TamGiac {
    Diem A, B, C;
    double chuViTamGiac();
};

istream& operator >> (istream& in, TamGiac& tamGiac);
ostream& operator << (ostream& out, TamGiac tamGiac);
double soSanhChuVi(TamGiac x, TamGiac y);
bool trungNhau(TamGiac x, TamGiac y);

int main() {
    TamGiac TG1, TG2;
    cin >> TG1 >> TG2;
    cout << TG1 << endl;
    cout << TG2 << endl;
    cout << (soSanhChuVi(TG1, TG2) < 0 ? "TRUE\n" : "FALSE\n");
    cout << (trungNhau(TG1, TG2) ? "TRUE" : "FALSE");
    return 0;
}

void Diem::nhap() {
    cin >> x >> y;
}

void Diem::xuat() {
    cout << "(" << x << "," << y << ")";
}

double khoangCach(Diem a, Diem b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

bool trungNhau(Diem a, Diem b) {
    return a.x == b.x && a.y == b.y;
}

double TamGiac::chuViTamGiac() {
    return khoangCach(A, B) + khoangCach(B, C) + khoangCach(C, A);
}

istream& operator >> (istream& in, TamGiac& tamGiac) {
    tamGiac.A.nhap();
    tamGiac.B.nhap(); 
    tamGiac.C.nhap();
    return in;
}

ostream& operator << (ostream& out, TamGiac tamGiac) {
    tamGiac.A.xuat();
    tamGiac.B.xuat(); 
    tamGiac.C.xuat();
    return out;
}

double soSanhChuVi(TamGiac x, TamGiac y) {
    return x.chuViTamGiac() - y.chuViTamGiac();
}

bool trungNhau(TamGiac x, TamGiac y) {
    if ((trungNhau(x.A, y.A) || trungNhau(x.A, y.B) || trungNhau(x.A, y.C)) &&
        (trungNhau(x.B, y.B) || trungNhau(x.B, y.C) || trungNhau(x.B, y.A)) &&
        (trungNhau(x.C, y.C) || trungNhau(x.C, y.A) || trungNhau(x.C, y.B))) 
        return true;
    return false;
}