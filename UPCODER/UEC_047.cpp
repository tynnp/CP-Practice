#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long m = 0, tmp = n;
    while (tmp != 0) {
        m = (m * 10) + tmp % 10;
        tmp /= 10;
    }

    if (n == m) 
        cout << "La so doi xung";
    else 
        cout << "Khong phai so doi xung";

    return 0;
}