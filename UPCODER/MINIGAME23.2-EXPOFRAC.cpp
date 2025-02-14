#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    int64_t tu, mau, bac;

    void rutGon() {
        int u = __gcd(tu, mau);
        tu /= u;
        mau /= u;

        if (mau < 0) {
            tu *= -1;
            mau *= -1;
        }
    }
};

int64_t Pow(int64_t a, int64_t b) {
    int64_t res = 1;
    
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }

    return res;
}

istream &operator >> (istream &in, PhanSo &p) {
    int n;
    string s;
    cin >> s >> n;

    size_t pos = s.find('/');

    p.tu = stoll(s.substr(0, pos));
    p.mau = stoll(s.substr(pos + 1));
    p.bac = n;

    p.rutGon();
    return in;
}

ostream &operator << (ostream &out, PhanSo p) {
    if (p.bac < 0) {
        p.bac = abs(p.bac);
        p = {p.mau, p.tu, p.bac};
    }
    
    p.tu = Pow(p.tu, p.bac);
    p.mau = Pow(p.mau, p.bac);
    p.rutGon();

    if (p.tu == 0) {
        out << 0;
        return out;
    }
    
    if (p.mau == 1) {
        out << p.tu;
        return out;
    }

    out << p.tu << '/' << p.mau;

    return out;
}

int32_t main() {
    int t;
    PhanSo p;
    cin >> t;

    while (t--) {
        cin >> p;
        cout << p << endl;
    }

    return 0;
}