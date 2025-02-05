#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    if (sum % 10 == 9)
        cout << "TRUE";
    else    
        cout << "FALSE";
    
    return 0;
}