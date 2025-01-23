#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

istream &operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    return in;
}

ostream &operator << (ostream &out, PhanSo &p) {
    out << p.tu << '/' << p.mau;
    return out;
}

bool operator == (PhanSo a, PhanSo b) {
    return a.tu * b.mau == a.mau * b.tu;
}

template<typename T>
void soSanh() {
    T a, b;
    cin >> a >> b;
    
    if (a == b) 
        cout << "true";
    else 
        cout << "false";
}

int main() {
    char c;
    cin >> c;
    
    if (c == 'a') soSanh<int>();
    if (c == 'b') soSanh<float>();
    if (c == 'c') soSanh<PhanSo>();
    
    return 0;
}
