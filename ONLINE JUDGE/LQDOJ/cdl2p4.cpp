#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = a + b;
    cout << (x < 0  ? "Tong am" : "Tong duong");
    return 0;
}