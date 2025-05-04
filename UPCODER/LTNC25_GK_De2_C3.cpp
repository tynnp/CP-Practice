#include <iostream>
#include <iomanip> 
using namespace std;

float tinhDiem(float diemGK, float diemCK) {
    return diemGK * 0.3 + diemCK * 0.7;
}

void tinhDiem(float diemTB) {
    cout << diemTB << " - ";
    if (diemTB >= 8.0)
        cout << "Gioi";
    else if (diemTB >= 6.5)
        cout << "Kha";
    else if (diemTB >= 5.0)
        cout << "Trung binh";
    else
        cout << "Yeu";
}

int main() {
    float diemGK, diemCK;
    cin >> diemGK >> diemCK;

    float diemTB = tinhDiem(diemGK, diemCK);
    cout << fixed << setprecision(2) << diemTB << endl;

    tinhDiem(diemTB);
    return 0;
}
