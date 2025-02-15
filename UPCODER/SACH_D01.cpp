#include <iostream>
using namespace std;

struct Sach {
    string maSach;
    string tenSach;
    int soTo;
};

istream &operator >> (istream &in, Sach &s) {
    in >> s.maSach >> s.tenSach >> s.soTo;
    return in;
}

ostream &operator << (ostream &out, Sach s) {
    out << s.maSach << endl;
    out << s.tenSach << endl;
    out << s.soTo << endl;
    return out;
}

int main() {
    string maCanTim;
    int n, idx = -1;
    cin >> maCanTim >> n;

    Sach a[n];
    for (Sach &x : a) cin >> x;

    for (int i = 0; i < n; i++) {
        if (maCanTim == a[i].maSach) 
            idx = i;
    }

    cout << idx; 
    return 0;
}