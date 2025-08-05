#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int socs = 0, tongcs = 0;
    while (n != 0) {
        socs++;
        tongcs += n % 10;
        n /= 10;
    }

    cout << socs << endl << tongcs;
    return 0;
}