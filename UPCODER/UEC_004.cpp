#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    cout << (int) c << endl;
    cout << char(c + 1) << ' ' << c + 1 << endl;
    cout << char(c - 1) << ' ' << c - 1 << endl;
    
    return 0;
}