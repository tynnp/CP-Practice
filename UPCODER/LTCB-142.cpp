#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    double a[n], min = 10e6;
    for (double &x : a) cin >> x;

    for (double x : a) 
        if (min > x) min = x;
        
    cout << min;
    return 0;
}