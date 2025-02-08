#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    do {
        cin >> n;
        sum += n;
    } while (n != 0);

    if (sum % 100 == 0) cout << "DEP";
    else if (sum % 100 == 55) cout << "TRUNGBINH";
    else cout << "XAU";
    
    return 0;  
}