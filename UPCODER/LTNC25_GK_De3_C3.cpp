#include <iostream>
#include <iomanip> 
using namespace std;

float tinhLuong(float luongCB, float heSo) {
    return luongCB * heSo;
}

void tinhLuong(float tongLuong) {
    cout << fixed << setprecision(2) << tongLuong << " - ";
    if (tongLuong >= 20000)
        cout << "Cao";
    else if (tongLuong >= 15000)
        cout << "Kha";
    else if (tongLuong >= 10000)
        cout << "Trung binh";
    else
        cout << "Yeu";
    cout << endl;
}

int main() {
    float luongCB, heSo;
    cin >> luongCB >> heSo;

    float tongLuong = tinhLuong(luongCB, heSo);
    cout << fixed << setprecision(2) << tongLuong << endl;
    tinhLuong(tongLuong);
    return 0;
}
