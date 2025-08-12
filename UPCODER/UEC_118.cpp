#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nhiet[7], sum = 0;
    int thap = 0;

    for (int i = 0; i < 7; i++) {
        cin >> nhiet[i];
        thap += nhiet[i] < 20;
        sum += nhiet[i];
    }

    cout << fixed << setprecision(2) << sum / 7 << endl;
    
    if (thap >= 3) 
        cout << "Mua";
    else 
        cout << "Khong mua";

    return 0;
}