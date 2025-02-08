#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string HoTen;
    int NamSinh;
    double DTB;
};

istream& nhap(SinhVien &sv) {
    return (cin >> sv.HoTen >> sv.NamSinh >> sv.DTB);
}

void xuat(SinhVien &sv) {
    cout << sv.HoTen << ' ' << sv.NamSinh << ' ' << sv.DTB << endl;
}

int main() {
    int n = 0;
    SinhVien sv[100];
    
    while (nhap(sv[n])) {
        n++;
    }
    
    double diemLonNhat = sv[0].DTB;
    for (int i = 1; i < n; i++) 
        if (diemLonNhat < sv[i].DTB)
            diemLonNhat = sv[i].DTB;
    
    double diemNhoNhat = sv[0].DTB;
    for (int i = 1; i < n; i++)
        if (diemNhoNhat > sv[i].DTB)
            diemNhoNhat = sv[i].DTB;
    
    cout << "Diem cao nhat lop:\n";
    int idx = 1;
    
    for (int i = 0; i < n; i++) {
        if (sv[i].DTB == diemLonNhat) {
            cout << "#" << idx++ << endl;
            xuat(sv[i]);
        }
    }
    
    cout << "Diem thap nhat lop:\n";
    idx = 1;
    
    for (int i = 0; i < n; i++) {
        if (sv[i].DTB == diemNhoNhat) {
            cout << "#" << idx++ << endl;
            xuat(sv[i]);
        }
    }
    
    return 0;
}