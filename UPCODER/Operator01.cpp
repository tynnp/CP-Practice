#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu;
    int mau;

    void rutGon() {
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
        if (mau < 0) 
            tu = -tu,
            mau = -mau;
    }
};

istream& operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    p.rutGon();
    return in;
}

ostream& operator << (ostream &out, PhanSo p) {
    out << p.tu << "/" << p.mau;
    return out;
}

bool operator > (PhanSo a, PhanSo b) {
    return a.tu * b.mau > a.mau * b.tu;
}

bool operator < (PhanSo a, PhanSo b) {
    return a.tu * b.mau < a.mau * b.tu;
}

int main() {
    int size; 
    cin >> size;
    PhanSo arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}