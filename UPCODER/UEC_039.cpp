#include <iostream>
using namespace std;

int main() {
    long long t, p, c;
    cin >> t >> p >> c;

    if (t == 1) {
        cout << p * c;
    } else {
        p = (p + 1) / 2;
        cout << p * c;
    }

    return 0;
}