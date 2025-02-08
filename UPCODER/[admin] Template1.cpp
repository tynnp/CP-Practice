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

bool operator < (PhanSo a, PhanSo b) {
    return a.tu * b.mau < a.mau * b.tu;
}

template<typename T>
void solve() {
    T a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b, c));
}

int main() {
    char c;
    cin >> c;
    
    if (c == 'a')
        solve<int>();
        
    if (c == 'b')
        solve<double>();
    
    if (c == 'c')
        solve<PhanSo>();
        
    return 0;
}