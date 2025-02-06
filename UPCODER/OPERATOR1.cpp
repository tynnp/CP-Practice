#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

struct Diem {
    int x, y;
};

struct HCN {
    Diem a, b, c, d;
    double dienTich();
};

struct TGV {
    Diem a, b, c;
    double dienTich();
};

struct HT {
    Diem toaDo;
    double banKinh;
    double dienTich();
};

istream& operator >> (istream &in, Diem &diem);
ostream& operator << (ostream &out, Diem diem);
double operator - (Diem a, Diem b);

istream& operator >> (istream &in, HCN &hcn);
ostream& operator << (ostream &out, HCN hcn);
double operator + (HCN a, HCN b);
bool operator < (HCN a, HCN b);
bool operator > (HCN a, HCN b);

istream& operator >> (istream &in, TGV &tgv);
ostream& operator << (ostream &out, TGV tgv);
double operator + (TGV a, TGV b);
bool operator < (TGV a, TGV b);
bool operator > (TGV a, TGV b);

istream& operator >> (istream &in, HT &ht);
ostream& operator << (ostream &out, HT ht);
double operator + (HT a, HT b);
bool operator < (HT a, HT b);
bool operator > (HT a, HT b);

int main() {
    ifstream ifile("HINH.inp");
    ofstream ofile("HINH.out");
    
    HCN hcn1, hcn2; 
    TGV tgv1, tgv2; 
    HT ht1, ht2;
    
    ifile >> hcn1 >> hcn2;
    ifile >> tgv1 >> tgv2;
    ifile >> ht1 >> ht2;

    ofile << hcn1 << " " << hcn2 << endl;
    ofile << tgv1 << " " << tgv2 << endl;
    ofile << ht1 << " " << ht2 << endl;

    ofile << hcn1 + hcn2 << endl;
    ofile << tgv1 + tgv2 << endl;
    ofile << ht1 + ht1 << endl;

    if (hcn1 > hcn2) ofile << "1 > 2" << endl;
    else if (hcn1 < hcn2) ofile << "1 < 2" << endl;
    else ofile << "1 = 2" << endl;

    if (tgv1 > tgv2) ofile << "1 > 2" << endl;
    else if (tgv1 < tgv2) ofile << "1 < 2" << endl;
    else ofile << "1 = 2" << endl;

    if (ht1 > ht2) ofile << "1 > 2" << endl;
    else if (ht1 < ht2) ofile << "1 < 2" << endl;
    else ofile << "1 = 2" << endl;
 
    ifile.close();
    ofile.close();
    return 0;
}

double HCN::dienTich() {
    double ab = this->a - this->b;
    double bc = this->b - this->c;
    return ab * bc;
}

double TGV::dienTich() {
    double ab = this->a - this->b;
    double bc = this->b - this->c;
    double ca = this->c - this->a;
    double p = (ab + bc + ca)/2;
    return sqrt(p * (p - ab) * (p - bc) * (p - ca));
}

double HT::dienTich() {
    return banKinh * banKinh * 3.14;
}

istream& operator >> (istream &in, Diem &diem) {
    in >> diem.x >> diem.y;
    return in;
}

ostream& operator << (ostream &out, Diem diem) {
    out << "(" << diem.x << ", " << diem.y << ")";
    return out;
}

double operator - (Diem a, Diem b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

istream& operator >> (istream &in, HCN &hcn) {
    in >> hcn.a >> hcn.b >> hcn.c >> hcn.d;
    return in;
}

ostream& operator << (ostream &out, HCN hcn) {
    out << hcn.a << hcn.b << hcn.c << hcn.d;
    return out;
}

double operator + (HCN a, HCN b) {
    return a.dienTich() + b.dienTich();
}

bool operator < (HCN a, HCN b) {
    return a.dienTich() < b.dienTich();
}

bool operator > (HCN a, HCN b) {
    return a.dienTich() > b.dienTich();
}

istream& operator >> (istream &in, TGV &tgv) {
    in >> tgv.a >> tgv.b >> tgv.c;
    return in;
}

ostream& operator << (ostream &out, TGV tgv) {
    out << tgv.a << tgv.b << tgv.c;
    return out;
}

double operator + (TGV a, TGV b) {
    return a.dienTich() + b.dienTich();
}

bool operator < (TGV a, TGV b) {
    return a.dienTich() < b.dienTich();
}

bool operator > (TGV a, TGV b) {
    return a.dienTich() > b.dienTich();
}

istream& operator >> (istream &in, HT &ht) {
    in >> ht.toaDo >> ht.banKinh;
    return in;
}

ostream& operator << (ostream &out, HT ht) {
    out << "(" << ht.toaDo.x << ", " << ht.toaDo.y << ", " << ht.banKinh << ")";
    return out;
}

double operator + (HT a, HT b) {
    return a.dienTich() + b.dienTich();
}

bool operator < (HT a, HT b) {
    return a.dienTich() < b.dienTich();
}

bool operator > (HT a, HT b) {
    return a.dienTich() > b.dienTich();
}