#include <iostream>
using namespace std;

int main() {
    double cn, cc;
    cin >> cn >> cc;

    double bmi = cn / (cc * cc);

    if (bmi < 18.5)
        cout << "Thieu can";
    else if (bmi < 25) 
        cout << "Binh thuong";
    else if (bmi < 30)
        cout << "Thua can";
    else 
        cout << "Beo phi";

    return 0;
}