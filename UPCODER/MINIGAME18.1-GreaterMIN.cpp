#include <iostream>
using namespace std;


int main() {
    int n; 
    cin >> n; 

    int a[n]; 
    for (int& x : a) cin >> x;

    int max = 9999;
    for (int x : a) if (max > x) max = x;

    int max2 = 9999;
    for (int x : a) if (max2 > x && x > max) max2 = x;

    cout << (max2 != 9999 ? to_string(max2) : "NO");
    return 0;
} 