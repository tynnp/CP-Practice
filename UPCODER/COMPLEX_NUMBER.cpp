#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct SoPhuc {
    int thuc, ao;

    double modun() {
        return sqrt(thuc*thuc + ao*ao);
    }
};

istream& operator >> (istream &in, SoPhuc &sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

ostream& operator << (ostream &out, SoPhuc sp) {
    out << "{";
    if (sp.thuc != 0) out << sp.thuc;

    if (sp.ao != 0) {
        if (sp.ao > 0 && sp.thuc != 0) out << "+";
        if (sp.ao < 0) out << "-";
        if (abs(sp.ao) != 1) 
            out << abs(sp.ao);
        out << "i";
    } 
    out << "}";
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

struct DaySoPhuc {
    int size;
    SoPhuc *values;

    SoPhuc tinhTong() {
        SoPhuc res = *(values);
        for (int i = 1; i < size; i++)
            res = res + *(values + i);
        return res;
    }

    SoPhuc tinhHieu() {
        SoPhuc res = *(values);
        for (int i = 1; i < size; i++)
            res = res - *(values + i);
        return res;
    }

    void tinhModun() {
        cout << fixed << setprecision(2);
        for (int i = 0; i < size; i++)
            cout << values[i].modun() << " ";
    }
};

istream& operator >> (istream &in, DaySoPhuc &a) {
    a.size = 0;
    a.values = new SoPhuc[100];
    while (in >> a.values[a.size]) a.size++;
    return in;
}

ostream& operator << (ostream &out, DaySoPhuc a) {
    for (int i = 0; i < a.size; i++)
        out << *(a.values + i) << " ";
    return out;
}

int main() {
    DaySoPhuc daySoPhuc; 
    cin >> daySoPhuc;

    cout << daySoPhuc << endl;
    daySoPhuc.tinhModun(); cout << endl;

    cout << daySoPhuc.tinhTong();
    return 0;
}