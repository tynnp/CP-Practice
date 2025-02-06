#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

struct Diem {
    int tung, hoanh;
};

struct TamGiac {
    Diem A, B, C;

    double chuVi() {
        double AB = A + B;
        double BC = B + C;
        double CA = C + A;
        return AB + BC + CA;
    }
};

istream &operator >> (istream &in, Diem &diem) {
    in >> diem.tung >> diem.hoanh;
    return in;
}

ostream &operator << (ostream &out, Diem diem) {
    out << "(" << diem.tung << ", " << diem.hoanh << ")";
    return out;
}

double operator + (Diem a, Diem b) {
    return sqrt(pow(b.tung - a.tung, 2) + pow(b.hoanh - a.hoanh, 2));
}

bool operator == (Diem a, Diem b) {
    return a.tung == b.tung && a.hoanh == b.hoanh;
}

istream &operator >> (istream &in, TamGiac &tamGiac) {
    in >> tamGiac.A >> tamGiac.B >> tamGiac.C;
    return in;
}

ostream &operator << (ostream &out, TamGiac &tamGiac) {
    out << tamGiac.A << "," << tamGiac.B << "," << tamGiac.C;
    return out;
}

double operator + (TamGiac a, TamGiac b) {
    return a.chuVi() + b.chuVi();
}

bool operator > (TamGiac a, TamGiac b) {
    return a.chuVi() > b.chuVi();
}

bool operator == (TamGiac a, TamGiac b) {
    return  ((a.A == b.A || a.A == b.B || a.A == b.C) && 
            (a.B == b.A || a.B == b.B || a.B == b.C) && 
            (a.C == b.A || a.C == b.B || a.C == b.C));
}

int main() {
    ifstream ifile;
    ofstream ofile;
    ifile.open("input.txt");
    ofile.open("output.txt");

    int n = 0;
    TamGiac arr[100];
    while (ifile >> arr[n]) n++;

    double tongChuVi = arr[0].chuVi();
    TamGiac tamGiacLonNhat = arr[0];

    for (int i = 1; i < n; i++) {
        tongChuVi += arr[i].chuVi();
        if (arr[i] > tamGiacLonNhat)
            tamGiacLonNhat = arr[i];
    }

    ofile << tongChuVi << endl;
    ofile << tamGiacLonNhat << endl;

    ifile.close();
    ofile.close();
    return 0;
}