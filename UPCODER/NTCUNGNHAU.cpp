#include <iostream>
using namespace std;

bool gcd(int a, int b) {
    if (b == 0) return a == 1;
    return gcd(b, a % b);
}

int main() {
    int a, b; 
    cin >> a >> b;
    cout << (gcd(a, b) ? "yes" : "no");
    return 0;
}