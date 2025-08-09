#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct ToaDo {
    int x, y;

    void nhap() {
        cin >> x >> y;
    }
};

double khoangCach(ToaDo a, ToaDo b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    ToaDo a, b;
    a.nhap();
    b.nhap();
    cout << fixed << setprecision(2) << khoangCach(a, b);
    return 0;
}