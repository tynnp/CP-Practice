#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

istream &operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    return in;
}

ostream &operator << (ostream &out, PhanSo p) {
    out << p.tu << '/' << p.mau;
    return out;
}

bool operator > (PhanSo a, PhanSo b) {
    return a.tu * b.mau > a.mau * b.tu;
}

template<typename T>
void timMax3So() {
    T a, b, c;
    cin >> a >> b >> c;
    
    T res = a;
    if (b > res) res = b;
    if (c > res) res = c;
    
    cout << res;
}

int main() {
    char c;
    cin >> c;
    
    if (c == 'a') timMax3So<int>();
    if (c == 'b') timMax3So<float>();
    if (c == 'c') timMax3So<PhanSo>();
     
    return 0;
}
