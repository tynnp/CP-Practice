#include <iostream>
using namespace std;

int thoiGianGiaoHang(float khoangCach) {
    if (khoangCach < 10) return 1;
    else if (khoangCach < 30) return 2;
    else if (khoangCach < 50) return 3;
    else return 7;
}

void thoiGianGiaoHang(int soNgay, string maDonHang) {
    cout << "Don hang " << maDonHang << " duoc giao trong " << soNgay << " ngay";
}

int main() {
    float khoangCach;
    string maDonHang;
    cin >> khoangCach >> maDonHang;
    
    int soNgay = thoiGianGiaoHang(khoangCach);
    cout << soNgay << endl;
    thoiGianGiaoHang(soNgay, maDonHang);
    return 0;
}