#include <iostream>
using namespace std;

struct SoMoi {
    int num;

    int tongChuSo() {
        int res = 0, tmp = num;
        while (tmp > 0) 
            res += tmp % 10,
            tmp /= 10;
        return res;
    }
};

istream& operator >> (istream &in, SoMoi &soMoi) {
    in >> soMoi.num;
    return in;
}

ostream& operator << (ostream &out, SoMoi soMoi) {
    out << "[SoMoi] " << soMoi.num;
    return out;
}

bool operator > (SoMoi a, SoMoi b) {
    return a.tongChuSo() > b.tongChuSo();
}

SoMoi operator + (SoMoi a, SoMoi b) {
    SoMoi res;
    res.num = a.tongChuSo() + b.tongChuSo();
    return res;
}

int main() {
    SoMoi a, b; 
    cin >> a >> b;
    cout << a << endl;
    cout << b << endl;
    cout << (a > b ? "true" : "false") << endl;
    cout << a + b;
    return 0;
}