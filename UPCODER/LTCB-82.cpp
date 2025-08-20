#include <iostream>
using namespace std;

int main() {
    float a, res = -9999;
    while (cin >> a)
        res = max(a, res);
    cout << res;
}