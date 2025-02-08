#include <iostream>
using namespace std;

int main() {
    int tmp, soLuong = 0;
    double diemTB = 0;

    do {
        cin >> tmp;
        if (tmp != -1)
            soLuong++, diemTB += tmp;
    } while (tmp != -1);

    diemTB = (double) diemTB / soLuong;
    if (diemTB < 4) cout << "F";
    else if (diemTB < 5.5) cout << "D";
    else if (diemTB < 7) cout << "C";
    else if (diemTB < 8.5) cout << "B";
    else cout << "A";
    
    return 0;
}