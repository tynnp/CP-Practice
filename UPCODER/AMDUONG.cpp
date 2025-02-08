#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) cout << "DUONG";
    else if (n < 0) cout << "AM";
    else cout << "KHONG";

    return 0;
}