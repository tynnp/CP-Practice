#include <iostream>
using namespace std;

int main() {
    int a, b, c, time; 
    cin >> a >> b >> c >> time;
    int res = a + b + c;
    res = time % res;

    if (res == 0 || res == a + b + c) cout << "A";
    else if (res == a) cout << "B";
    else if (res == a + b) cout << "C";
    else if (res > 0 && res < a) cout << "AB";
    else if (res > a && res < a + b) cout << "BC";
    else if (res > a + b && res < a + b + c) cout << "CA";

    return 0;
}