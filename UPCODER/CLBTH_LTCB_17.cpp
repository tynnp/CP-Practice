#include <iostream>
using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    int neg = 0;
    bool zero = false;

    double n[] = {A, B, C, D};

    for (int i = 0; i < 4; ++i) {
        if (n[i] == 0) {
            zero = true;
            break;
        }
        if (n[i] < 0) neg++;
    }

    if (zero) 
        cout << 0;
    else if (neg % 2 == 0) 
        cout << 1;
    else 
        cout << -1;

    return 0;
}