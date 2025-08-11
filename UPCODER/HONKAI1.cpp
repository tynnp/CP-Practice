#include <iostream>
#include <algorithm>
using namespace std;

struct HanhDong {
    string ten;
    int diemTocDo;

    friend istream &operator >> (istream &in, HanhDong &a) {
        in >> a.ten >> a.diemTocDo;
        return in;
    }

    friend ostream &operator << (ostream &out, HanhDong a) {
        out << a.ten << endl;
        return out;
    }
};

int main() {
    int n;
    cin >> n;

    HanhDong a[n];
    for (HanhDong &x : a) cin >> x;

    sort(a, a + n, [](HanhDong a, HanhDong b) {
        return a.diemTocDo > b.diemTocDo;
    });

    for (HanhDong x : a) cout << x;
    return 0;
}