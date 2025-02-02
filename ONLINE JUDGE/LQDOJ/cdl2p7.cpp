#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n % m == 0)
        cout << "Co";
    else 
        cout << "Khong";
    return 0;
}