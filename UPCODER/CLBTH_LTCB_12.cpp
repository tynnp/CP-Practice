#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (b * b == a * c)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}