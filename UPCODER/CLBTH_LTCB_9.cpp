#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int d = 2;
    while (n > 1) {
        while (n > 1 && n % d == 0) {
            cout << d << ' ';
            n /= d;
        }
        d++;
    }

    return 0;
}