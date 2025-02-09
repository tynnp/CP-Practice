#include <iostream>
using namespace std;

struct KhachHang {
    string maKhachHang;
    string tenKhachHang;
    long long tienDangCo;
};

istream &operator >> (istream &in, KhachHang &kh) {
    string s;
    int l = 0, r = 0;
    getline(in, s);

    for (r; s[r] != '-'; r++);
    kh.maKhachHang = s.substr(l, r - l - 1);

    l = r + 2;
    for (r++; s[r] != '-'; r++);
    kh.tenKhachHang = s.substr(l, r - l - 1);

    l = r + 2;
    kh.tienDangCo = stoll(s.substr(l)); 
    return in;
}

ostream &operator << (ostream &out, KhachHang kh) {
    out << kh.maKhachHang << " - ";
    out << kh.tenKhachHang << " - ";
    out << kh.tienDangCo;
    return out;
}

int main() {
    int n, cnt = 0;
    cin >> n;
    cin.ignore();
    KhachHang a[n], res;
    for (KhachHang &x : a) cin >> x;
    
    res = a[0];
    cnt = (a[0].tienDangCo >= 0);

    for (int i = 1; i < n; i++) {
        cnt += (a[i].tienDangCo >= 0);
        if (a[i].tienDangCo > res.tienDangCo)
            res = a[i];
    }

    cout << cnt << endl << res;
    return 0;
}