#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (int i = 1; i <= 60; i++) {
        if (pow(2, i) == n) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}