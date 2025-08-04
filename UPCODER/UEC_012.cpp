#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n % 10;
    int b = (n / 10) % 10;
    int c = (n / 100) % 10;
    int d = n / 1000;

    cout << a + b + c + d;
    return 0;
}