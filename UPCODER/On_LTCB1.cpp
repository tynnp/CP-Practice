#include <iostream>
using namespace std;

int main() {
    int a, b; 
    cin >> a >> b;
    if (a+b > -1) cout << a+b << " ";
    if (a-b > -1) cout << a-b << " ";
    if (a*b > -1) cout << a*b << " ";
    if (a+b < 0 && a-b < 0 && a*b < 0) cout << "impossible";
    return 0;
}