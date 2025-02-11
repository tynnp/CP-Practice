#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    if (n % 3 == 0) 
        cout << n << " chia het cho 3";
    else 
        cout << n << " chia 3 du " << n % 3;
    
    return 0;
}