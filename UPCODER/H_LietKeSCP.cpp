#include <iostream>
#include <cmath>
using namespace std;

bool square(int n) {
    return sqrt(n) == (int) sqrt(n);
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)    
        if (square(i))
            cout << i << endl;
    
    return 0;
}