#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    float a[n], sum = 0;
    for (float& x : a) cin >> x;
    for (float x : a) if (x < 0) sum += x; 

    cout << roundf(sum*100) / 100;
    return 0;
}