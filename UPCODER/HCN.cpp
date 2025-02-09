#include <iostream>
using namespace std;

struct HinhChuNhat {
    double dai;
    double rong;

    double chuVi() {
        return (dai + rong) * 2;
    }
};

istream& operator >> (istream &in, HinhChuNhat &hcn) {
    in >> hcn.dai >> hcn.rong;
    return in;
}

ostream& operator << (ostream &out, HinhChuNhat hcn) {
    out << "[HCN] " << hcn.dai << ", " << hcn.rong;
    return out;
}

bool operator < (HinhChuNhat a, HinhChuNhat b) {
    return a.chuVi() < b.chuVi();
}

double operator + (HinhChuNhat a, double x) {
    return a.chuVi() + x;
}

int main() {
    HinhChuNhat a, b;
    cin >> a >> b; 
    cout << a << endl << b << endl;
    cout << (a < b ? "true" : "false");
    return 0;
}