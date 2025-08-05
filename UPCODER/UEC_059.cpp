#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = log10(n) + 1;
    int ans = 0, m = n;

    while (n != 0) {
        ans += pow(n % 10, k);
        n /= 10;
    }

    if (ans == m) 
        cout << "la so Armstrong";
    else 
        cout << "khong la so Armstrong";

    return 0;
}