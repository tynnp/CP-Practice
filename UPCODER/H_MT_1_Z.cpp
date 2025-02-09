#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct SoPhuc {
    int thuc, ao;
};

istream& operator >> (istream &in, SoPhuc &sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

ostream& operator << (ostream &out, SoPhuc sp) {
    if (sp.thuc != 0) out << sp.thuc;
    if (sp.ao != 0) {
        if (sp.ao > 0 && sp.thuc != 0) out << " + ";
        if (sp.ao < 0) out << " - ";
        if (abs(sp.ao) != 1) 
            out << abs(sp.ao);
        out << "*i";
    } 
    return out;
}

SoPhuc operator + (SoPhuc a, SoPhuc b) {
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

SoPhuc operator - (SoPhuc a, SoPhuc b) {
    SoPhuc res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

SoPhuc operator * (SoPhuc a, SoPhuc b) {
    SoPhuc res;
    res.thuc = a.thuc*b.thuc - a.ao*b.ao; 
    res.ao = a.ao*b.thuc + a.thuc*b.ao;
    return res;
}

bool operator > (SoPhuc a, SoPhuc b) {
    if (a.thuc > b.thuc) return true; 
    else if (a.thuc == b.thuc && a.ao > b.ao) return true;
    return false;
}

int main() {
    ifstream ifile;
    ofstream ofile;
    ifile.open("input.txt");
    ofile.open("output.txt");

    int n = 0;
    SoPhuc arr[n];
    while (ifile >> arr[n]) n++;

    SoPhuc tong = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        tong = tong + arr[i];
    }

    ofile << max << endl << tong;
    ifile.close();
    ofile.close();
    return 0;
}