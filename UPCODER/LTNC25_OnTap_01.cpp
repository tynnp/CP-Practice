#include <iostream>
#include <iomanip>
using namespace std;

double dienTich(double r) {
    return 3.14 * r * r;
}

double dienTich(double length, double width) {
    return length * width;
}

int main() {
    double r, length, width;
    cin >> r >> length >> width;
    
    cout << fixed << setprecision(2);
    cout << dienTich(r) << endl;
    cout << dienTich(length, width);

    return 0;
}