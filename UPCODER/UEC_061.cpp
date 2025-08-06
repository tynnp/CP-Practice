#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << max(a, max(b, max(c, max(d, e))));
    return 0;
}