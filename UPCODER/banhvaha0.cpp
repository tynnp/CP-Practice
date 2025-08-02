#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> b;

    while (n--) {
        a = b;
        while (cin >> b) {
            if (b > 0) {
                break;
            } else {
                a += b;
            }
        }
        cout << a << endl;
    }

    return 0;
}