#include <bits/stdc++.h>
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    double BMI = w / (h*h);

    if (BMI < 18.5)
        cout << "Thieu can";
    else if (BMI <= 22.9)
        cout << "Binh thuong";
    else 
        cout << "Thua can";

    return 0;
}