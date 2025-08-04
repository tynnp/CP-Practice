#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int c = a;
    a = b;
    b = c;

    cout << a << ' ' << b;
    return 0;
}