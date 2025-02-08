#include <iostream>
#include <cmath>
using namespace std;

struct DonThuc {
    int heSo;
    int soMu;
    DonThuc daoHam();
};

struct DaThuc {
    int bac;
    DonThuc giaTri[100];

    DaThuc daoHamCapMot();
    DaThuc daoHamCapHai();
    int check();
};

ostream& operator << (ostream &out, DonThuc donThuc);
istream& operator >> (istream &in, DaThuc &daThuc);
ostream& operator << (ostream &out, DaThuc daThuc);

int main() {
    DaThuc a; 
    cin >> a;
    cout << a << endl;
    DaThuc b = a.daoHamCapMot();
    DaThuc c = a.daoHamCapHai();

    if (b.check() == 0) 
        cout << 0 << endl;
    else 
        cout << b << endl;

    if (c.check() == 0) 
        cout << 0 << endl;
    else 
        cout << c << endl;

    return 0;
}

ostream& operator << (ostream &out, DonThuc donThuc) {
    if (donThuc.heSo != 0) {
        if (donThuc.soMu != 0) {
            if (abs(donThuc.heSo) == 1) out << "x";
            else out << abs(donThuc.heSo) << "x";
            if (donThuc.soMu > 1) out << "^" << donThuc.soMu;
        } else out << abs(donThuc.heSo);
    }

    return out;
}

istream& operator >> (istream &in, DaThuc &daThuc) {
    in >> daThuc.bac;
    int size = daThuc.bac;

    for (int i = size; i >= 0; i--) {
        in >> daThuc.giaTri[i].heSo;
        daThuc.giaTri[i].soMu = i;
    }

    return in;
}

ostream& operator << (ostream &out, DaThuc daThuc) {
    int size = daThuc.bac;
    bool check = false;

    for (int i = size; i >= 0; i--) {
        int heSo = daThuc.giaTri[i].heSo;

        if (check && heSo > 0) cout << "+";
        if (heSo < 0) cout << "-";
        cout << daThuc.giaTri[i];

        if (heSo != 0) check = true;
    }

    return out;
}

DonThuc DonThuc::daoHam() {
    DonThuc res;
    res.heSo = heSo * soMu;
    res.soMu = soMu - 1;
    return res;
}

DaThuc DaThuc::daoHamCapMot() {
    DaThuc res;
    res.bac = bac-1;
    for (int i = res.bac; i >= 0; i--)  
        res.giaTri[i] = giaTri[i+1].daoHam();
    return res;
}

DaThuc DaThuc::daoHamCapHai() {
    DaThuc c1, c2;
    c1 = daoHamCapMot();
    c2 = c1.daoHamCapMot();
    return c2;
}

int DaThuc::check() {
    int res = 0;
    for (int i = bac; i >= 0; i--)    
        res += giaTri[i].heSo;
    return res;
}