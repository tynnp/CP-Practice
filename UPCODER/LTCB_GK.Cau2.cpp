#include <iostream>
using namespace std;

int main() {
    double batDau, ketThuc;
    cin >> batDau >> ketThuc;

    double soTien = 0;
    double soGio = ketThuc - batDau;

    if (soGio <= 3)
        soTien = soGio * 30'000;
    else 
        soTien = 90'000 + (soGio - 3) * 21'000;

    cout << soTien;
    return 0;
}