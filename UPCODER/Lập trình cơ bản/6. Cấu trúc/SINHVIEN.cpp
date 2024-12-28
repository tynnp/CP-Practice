#include <iostream>
using namespace std;

struct SinhVien {
    string HoTen;
    int NamSinh;
    double DTB;
    
    void nhap(string ten, int nam, double diem) {
        HoTen = ten;
        NamSinh = nam;
        DTB = diem;
    }
    
    void xuat() {
        cout << HoTen << ' ' << NamSinh << ' ' << DTB << endl;
    }
};

int main() {
    SinhVien sv[100];
    int n = 0;
    
    string ten;
    int nam;
    double diem;
    
    while (cin >> ten >> nam >> diem) {
        sv[n].nhap(ten, nam, diem);
        n++;
    }
    
    double diemCaoNhat = sv[0].DTB;
    for (int i = 1; i < n; i++) {
        if (diemCaoNhat < sv[i].DTB)
            diemCaoNhat = sv[i].DTB;
    }
    
    double diemThapNhat = sv[0].DTB;
    for (int i = 1; i < n; i++) {
        if (diemThapNhat > sv[i].DTB)
            diemThapNhat = sv[i].DTB;
    }
    
    cout << "Diem cao nhat lop:\n";
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (sv[i].DTB == diemCaoNhat) {
            cout << '#' << cnt++ << endl;
            sv[i].xuat();
        }
    }
    
    cout << "Diem thap nhat lop:\n";
    cnt = 1;
    for (int i = 0; i < n; i++) {
        if (sv[i].DTB == diemThapNhat) {
            cout << '#' << cnt++ << endl;
            sv[i].xuat();
        }
    }
    
    return 0;
}
