#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        cout << "La chu cai";
    else 
        cout << "Khong phai chu cai";

    return 0;
}