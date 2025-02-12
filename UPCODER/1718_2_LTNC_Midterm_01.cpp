#include <iostream>
#include <cmath>
#include <iomanip>
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
        out << (sp.ao < 0 ? "-" : "+");
        if (abs(sp.ao) != 1) out << abs(sp.ao);
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

struct Array {
    int size;
    SoPhuc* data;

    SoPhuc tongSoPhuc() {
        SoPhuc res = data[0];
        for (int i = 1; i < size; i++) 
            res = res + data[i];
        return res;
    }
};

istream& operator >> (istream &in, Array &arr) {
    arr.size = 0;
    arr.data = new SoPhuc[10001];
    SoPhuc tmp;
    while (cin >> tmp)
        arr.data[arr.size++] = tmp; 
    return in;
}

ostream& operator << (ostream &out, Array arr) {
    for (int i = 0; i < arr.size; i++) 
        out << arr.data[i] << " "; out << endl;

    out << fixed << setprecision(2);
    for (int i = 0; i < arr.size; i++)
        out << arr.data[i].modun() << " "; out << endl;

    out << arr.tongSoPhuc();
    return out;
}

int main() {
    Array a;
    cin >> a;
    cout << a;
    return 0;
}