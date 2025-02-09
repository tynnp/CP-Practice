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

// Tiền tố
PhanSo operator ++ (PhanSo &p) {
    p.tu += 1;
    return p;
}

// Hậu tố
PhanSo operator ++ (PhanSo &p, int) {
    PhanSo prev = p;
    p.tu += 1;
    return prev;
}

PhanSo operator -- (PhanSo &p) {
    p.tu -= 1;
    return p;
}

PhanSo operator -- (PhanSo &p, int) {
    PhanSo prev = p;
    p.tu -= 1;
    return prev;
}

int main() {
    PhanSo p;
    string toanTu;
    cin >> p >> toanTu;
    
    cout << p << endl;
    
    if (toanTu == "++")
        cout << ++p;
    else 
        cout << --p;
    
    return 0;
}