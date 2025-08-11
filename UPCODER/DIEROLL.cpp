#include <bits/stdc++.h>
using namespace std;

void rutGon(int &x, int &y){
    int g = __gcd(x, y);
    x = x / g;
    y = y / g;
}

int main() {
    int x, y;
    cin >> x >> y;

    int tu = 6 - min(x, y) + 1;
    int mau = 6;

    rutGon(tu, mau);
    cout << tu << "/" << mau;
    return 0;
}