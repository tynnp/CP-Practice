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
    out << s.maSach << "-";
    out << s.tenSach << "-";
    out << s.soTo;
    return out;
}

void sapXepTangDan(Sach a[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j-1].soTo > a[j].soTo) 
            swap(a[j-1], a[j]), j--;
    }
}

int main() {
    int n;
    cin >> n;

    Sach a[n];
    for (Sach &x : a) 
        cin >> x;

    sapXepTangDan(a, n);
    for (Sach x : a) 
        cout << x << endl;
    
    return 0;
}