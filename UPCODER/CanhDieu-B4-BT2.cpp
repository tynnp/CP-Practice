#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    double kg;
    cin >> kg;
    double pound = kg * 2.20462;
    cout << fixed << setprecision(2) << pound;
    return 0;
}