#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct SoPhuc {
    int thuc, ao;
};

istream& operator >> (istream &in, SoPhuc &sp);
ostream& operator << (ostream &out, SoPhuc sp);
SoPhuc operator + (SoPhuc a, SoPhuc b);
SoPhuc operator * (SoPhuc a, SoPhuc b);
bool operator > (SoPhuc a, SoPhuc b);

int main() {
    ifstream ifile;
    ofstream ofile;
    ifile.open("input.txt");
    ofile.open("output.txt");

    int n;
    ifile >> n;
    SoPhuc arr[n], max, tong, tich;
    for (SoPhuc &x : arr) ifile >> x;

    max = tong = tich = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) 
            max = arr[i];
        tong = tong + arr[i];
        tich = tich * arr[i];
    }

    ofile << max << endl;
    ofile << tong << endl;
    ofile << tich << endl;

    ifile.close();
    ofile.close();
    return 0;
}

istream& operator >> (istream &in, SoPhuc &sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

ostream& operator << (ostream &out, SoPhuc sp) {
    if (sp.thuc != 0) 
        out << sp.thuc;

    if (sp.ao != 0) {
        if (sp.ao > 0 && sp.thuc != 0) 
            out << " + ";

        if (sp.ao < 0) 
            out << " - ";

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

SoPhuc operator * (SoPhuc a, SoPhuc b) {
    SoPhuc res;
    res.thuc = a.thuc*b.thuc - a.ao*b.ao;
    res.ao = a.thuc*b.ao + a.ao*b.thuc;
    return res;
}

bool operator > (SoPhuc a, SoPhuc b) {
    if (a.thuc > b.thuc) 
        return true;

    else if (a.thuc == b.thuc) 
        return a.ao > b.ao;

    return false;
}