#include <iostream>
#include <cmath>
using namespace std;

bool Arm(int n) {
    int k = log10(n) + 1;
    int sum = 0, m = n;
    
    while (n != 0) {
        sum += pow(n % 10, k);
        n /= 10;
    }
    
    return sum == m;
}

int main() {
    int n;
    
    while (cin >> n) {
        if (Arm(n)) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    
    return 0;
}
