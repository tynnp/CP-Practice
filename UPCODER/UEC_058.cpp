#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    if (a == 1)
        cout << "la cap so nguyen to cung nhau";
    else 
        cout << "khong la cap so nguyen to cung nhau";

    return 0;
}