#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double n, S = 0; 
    cin >> n;

    while (n > 0) {
        S += 1.0 / n; 
        n--;
    }

    cout << setprecision(3) << S;
    return 0;
}