#include <iostream>
using namespace std;

struct COLORED_POINT {
    int x;
    int y;
    string maMau;

    bool kiemTra5DC3A8() {
        if (maMau == "5DC3A8") 
            return true;
        return false;
    }

    void doiMaMau() {
        if (x > y) maMau = "1F00F3";
    }
};

istream& operator >> (istream &in, COLORED_POINT &cp) {
    in >> cp.x >> cp.y >> cp.maMau;
    return in;
}

ostream& operator << (ostream &out, COLORED_POINT cp) {
    out << "(" << cp.x << "," << cp.y << ",#" << cp.maMau << ")";
    return out;
}

int main() {
    int n; 
    cin >> n;

    COLORED_POINT *a = new COLORED_POINT[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < n; i++) 
        cout << a[i] << ' ';
    cout << endl; 

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].kiemTra5DC3A8()) cnt++;
        a[i].doiMaMau();
    }

    cout << cnt << endl;
    for (int i = 0; i < n; i++) 
        cout << a[i] << ' '; 

    delete[] a;
    return 0;
}