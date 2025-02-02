#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    cout << char(tolower(c - 1));
    return 0;
}