#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 6'000'000;
    for (int i = 1; i <= n; i++) 
        ans *= 1.018;
    
    cout << (int) ans;
    return 0;
}