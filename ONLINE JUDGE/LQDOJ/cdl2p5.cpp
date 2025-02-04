#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << "Nam nhuan";
    else 
        cout << "Khong la nam nhuan";

    return 0;
}