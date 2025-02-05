#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

struct HonSo {
    PhanSo phanSo;
    int phanNguyen;
};

int gcd(int a, int b);

istream& operator >> (istream& in, PhanSo& p);
ostream& operator << (ostream& out, PhanSo p);
bool operator != (PhanSo a, PhanSo b);

istream& operator >> (istream& in, HonSo& hs);
ostream& operator << (ostream& out, HonSo hs);
bool operator != (HonSo x, HonSo y);
bool operator > (HonSo a, HonSo b);
HonSo chuyenDoi(HonSo hs, string str = "true");
int tongCacThanhPhan(HonSo hs);

int main() {
    HonSo a, b; 
    string str;
    cin >> a >> b >> str;

    a = chuyenDoi(a, str);
    b = chuyenDoi(b, str); 

    cout << (a != b ? "TRUE" : "FALSE") << endl;
    cout << (a > b ? "TRUE" : "FALSE") << endl;
    cout << a << endl << b << endl;

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

istream& operator >> (istream& in, PhanSo& p) {
    in >> p.tu >> p.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo p) {
    int ucln = gcd(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    out << p.tu << "/" << p.mau;
    return out;
}

bool operator != (PhanSo a, PhanSo b) {
    return a.tu*b.mau != a.mau*b.tu;
}

istream& operator >> (istream& in, HonSo& hs) {
    in >> hs.phanNguyen >> hs.phanSo;
    return in;
}

ostream& operator << (ostream& out, HonSo hs) {
    if (hs.phanNguyen != 0)
        out << hs.phanNguyen << " ";
    out << hs.phanSo;
    return out;
}

HonSo chuyenDoi(HonSo hs, string str) {
    PhanSo tmp;
    HonSo res;
    tmp.tu = hs.phanNguyen*hs.phanSo.mau + hs.phanSo.tu;
    tmp.mau = hs.phanSo.mau;
        
    int ucln = gcd(tmp.tu, tmp.mau);
    tmp.tu /= ucln;
    tmp.mau /= ucln;
        
    if (str == "false") {
        res.phanNguyen = 0;
        res.phanSo = tmp;

    } else {
        res.phanSo.mau = tmp.mau;
        res.phanSo.tu = tmp.tu % tmp.mau;
        res.phanNguyen = tmp.tu / tmp.mau;
    }

    return res;
}

bool operator != (HonSo x, HonSo y) {
    HonSo a = chuyenDoi(x, "false");
    HonSo b = chuyenDoi(y, "false");
    return a.phanSo != b.phanSo;
}

int tongCacThanhPhan(HonSo hs) {
    return hs.phanNguyen + hs.phanSo.tu + hs.phanSo.mau;
}

bool operator > (HonSo a, HonSo b) {
    return tongCacThanhPhan(a) > tongCacThanhPhan(b);
}