#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;

    istream &nhap() {
        return (cin >> tu >> mau);
    }

    void xuat() {
        cout << tu << "/" << mau;
    }

    void rutGon() {
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }
};

int main() {
    PhanSo ans, arr[100];
    int n = 0;

    while (arr[n].nhap()) n++;

    ans = arr[0];
    for (int i = 1; i < n; i++)
        if (ans.tu * arr[i].mau > ans.tu * arr[i].mau)
            ans = arr[i];

    ans.rutGon();
    ans.xuat();
    return 0;
}