#include <iostream>
#include <cmath>
using namespace std;

bool square(int n) {
    return sqrt(n) == (int) sqrt(n);
}

int main() {
    int x, sum = 0;

    while (cin >> x) 
        if (square(x))
            sum += x;
        
    cout << sum;
    return 0;
}