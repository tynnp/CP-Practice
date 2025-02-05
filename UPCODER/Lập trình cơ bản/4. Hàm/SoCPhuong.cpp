#include <iostream>
#include <cmath>
using namespace std;

bool square(int n) {
    return sqrt(n) == (int) sqrt(n);
}

int main() {
    int n;
    cin >> n;
    cout << (square(n) ? "yes" : "no");
    return 0;
}
