#include <bits/stdc++.h>
using namespace std;

double solve(int n) {
    if (n == 1) return 1.0/2;
    return 1 / (1 + solve(n - 1));
}

int main() {
    double n;
    cin >> n;
    
    if (n > 0 && (int) n == n)
        cout << fixed << setprecision(4) << solve(n);
    else 
        cout << -1;

    return 0;
}