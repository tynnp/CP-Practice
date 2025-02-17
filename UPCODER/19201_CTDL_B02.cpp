#include <bits/stdc++.h>
using namespace std;

struct info {
    string maSo, tenSach;
    int soLuong;
    double giaTien;

    double tongTien() {
        return soLuong * giaTien;
    }
};

istream &operator >> (istream &in, info &f) {
    in >> f.maSo >> f.tenSach >> f.soLuong >> f.giaTien;
    return in;
}

ostream &operator << (ostream &out, info f) {
    out << f.maSo << '|' << f.tenSach << '|' << f.soLuong << '|' << f.giaTien;
    return out;
}

int find(info f[], int n, string tenSach) {
    for (int i = 0; i < n; i++)
        if (f[i].tenSach == tenSach)
            return i;
    return -1;
}

void sort(info f[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (f[i].tongTien() < f[j].tongTien())
                swap(f[i], f[j]);
            else if (f[i].tongTien() == f[j].tongTien() && f[i].soLuong > f[j].soLuong)
                swap(f[i], f[j]);
        }
    }
}

int main() {
    int n;
    info f[100];
    string tenSach;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> f[i];
    
    sort(f, n);
    
    for (int i = 0; i < n; i++)
        cout << f[i] << '\n';
    
    return 0;
}