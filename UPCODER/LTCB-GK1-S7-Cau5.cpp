#include <iostream>
using namespace std;

int main() {
    int batDau, ketThuc;
    cin >> batDau >> ketThuc;

    if (batDau < 8 || ketThuc > 24 || batDau > ketThuc) {
        cout << "NO";
        return 0;
    }

    int soTien = 0;
    int soGio = ketThuc - batDau;

    if (soGio <= 3)
        soTien = soGio * 30'000;
    else 
        soTien = 90'000 + (soGio - 3) * 21'000;

    cout << soTien;
    return 0;
}