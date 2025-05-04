#include <iostream>
#include <string>
using namespace std;

int tinhTien(int soLuong, int donGia) {
    return soLuong * donGia;
}

void tinhTien(int tongTien) {
    string s = to_string(tongTien);
    int len = s.length();
    string res;

    int cnt = 0;
    for (int i = len - 1; i >= 0; --i) {
        res.insert(0, 1, s[i]);
        cnt++;
        
        if (cnt == 3 && i != 0) {
            res.insert(0, 1, '.');
            cnt = 0;
        }
    }

    cout << res << " VND" << endl;
}

int main() {
    int soLuong, donGia;
    cin >> soLuong >> donGia;

    int tongTien = tinhTien(soLuong, donGia);
    cout << tongTien << endl;
    tinhTien(tongTien);

    return 0;
}