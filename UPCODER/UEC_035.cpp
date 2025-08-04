#include <iostream>
using namespace std;

int main() {
    double dh10;
    cin >> dh10;

    double dh4 = dh10 / 10 * 4;

    if (dh4 < 1) 
        cout << "Kem";
    else if (dh4 < 2)
        cout << "Yeu";
    else if (dh4 < 2.5)
        cout << "Trung binh";
    else if (dh4 < 3.2)
        cout << "Kha";
    else if (dh4 < 3.6)
        cout << "Gioi";
    else 
        cout << "Xuat sac";

    return 0;
}