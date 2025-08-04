#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    if (a == 0 && b == 0) 
        cout << "Vo so nghiem";
    else if (a == 0)
        cout << "Vo nghiem";
    else 
        cout << fixed << setprecision(2) << -b / a;
    
    return 0;
}